import sqlite3

connection = sqlite3.connect('votes.db')
cursor = connection.cursor()
cursor.execute('''
    CREATE TABLE IF NOT EXISTS votes (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        option TEXT NOT NULL
    )
''')
connection.commit()
connection.close()

print("Database created successfully.")