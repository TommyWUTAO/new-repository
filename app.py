from flask import Flask, render_template, request, redirect, url_for
import sqlite3

app = Flask(__name__)

def get_db_connection():
    conn = sqlite3.connect('votes.db')
    conn.row_factory = sqlite3.Row
    return conn

@app.route('/', methods=['GET', 'POST'])
def vote():
    if request.method == 'POST':
        option = request.form['option']
        conn = get_db_connection()
        conn.execute('INSERT INTO votes (option) VALUES (?)', (option,))
        conn.commit()
        conn.close()
        return redirect(url_for('thank_you'))
    return render_template('vote.html')

@app.route('/thank-you')
def thank_you():
    return "感谢您的投票！"

# 新增：结果页面路由
@app.route('/results')
def results():
    conn = get_db_connection()
    votes = conn.execute('SELECT option, COUNT(*) as count FROM votes GROUP BY option').fetchall()
    conn.close()
    return render_template('results.html', votes=votes)

if __name__ == '__main__':
    app.run(debug=True, port=5000)