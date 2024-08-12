#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int ID;
    double grade;

public:
    // 构造函数
    Student(string s_name, int s_ID, double s_grade);

    // Getter方法
    string get_name() { return name; }
    int get_ID() { return ID; }
    double get_grade() { return grade; }

    // Setter方法
    void change_name(string new_name) { name = new_name; }
    void change_ID(int new_id) { ID = new_id; }
    void change_grade(double new_grade) { grade = new_grade; }

    // 判断是否通过的方法
    bool ispass();

    // 打印学生信息
    void print() {
        cout << "Name: " << name << ", ID: " << ID << ", Grade: " << grade << endl;
    }
};

// 构造函数定义
Student::Student(string s_name, int s_ID, double s_grade) {
    name = s_name;
    ID = s_ID;
    grade = s_grade;
}

// ispass() 方法定义（类的外部）
bool Student::ispass() {
    return grade >= 60;
}

int main() {
    // 创建Student对象并初始化
    Student s1("Tom", 123123, 92);

    // 打印学生信息
    s1.print();

    // 修改学生信息
    s1.change_name("Jerry");
    s1.change_ID(456456);
    s1.change_grade(85);

    // 再次打印学生信息
    s1.print();

    // 判断是否通过并输出结果
    if (s1.ispass()) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}