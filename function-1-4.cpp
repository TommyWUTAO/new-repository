#include <iostream>
#include <stdexcept>
using namespace std;

class Matrix {
public:
    // 构造函数：初始化矩阵为 rows x cols 大小，并将所有元素设置为 0
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        allocateMemory();
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                data[i][j] = 0;
    }

    // 拷贝构造函数：实现深拷贝
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        allocateMemory();
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                data[i][j] = other.data[i][j];
    }

    // 移动构造函数：实现移动语义，避免不必要的深拷贝
    Matrix(Matrix&& other) noexcept : rows(other.rows), cols(other.cols), data(other.data) {
        other.data = nullptr;  // 将其他对象的指针置空，防止释放内存
        other.rows = 0;
        other.cols = 0;
    }

    // 拷贝赋值操作符：实现深拷贝并防止自我赋值
    Matrix& operator=(const Matrix& other) {
        if (this != &other) {
            releaseMemory();
            rows = other.rows;
            cols = other.cols;
            allocateMemory();
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    data[i][j] = other.data[i][j];
        }
        return *this;
    }

    // 移动赋值操作符：实现移动语义
    Matrix& operator=(Matrix&& other) noexcept {
        if (this != &other) {
            releaseMemory();
            rows = other.rows;
            cols = other.cols;
            data = other.data;
            other.data = nullptr;  // 将其他对象的指针置空，防止释放内存
            other.rows = 0;
            other.cols = 0;
        }
        return *this;
    }

    // 获取矩阵中的元素
    int& at(int row, int col) {
        if (row >= rows || col >= cols || row < 0 || col < 0) {
            throw out_of_range("Index out of bounds");
        }
        return data[row][col];
    }

    // 析构函数：释放动态分配的内存
    ~Matrix() {
        releaseMemory();
    }

private:
    int** data;  // 指向二维动态数组的指针
    int rows, cols;

    // 分配内存
    void allocateMemory() {
        data = new int*[rows];
        for (int i = 0; i < rows; i++)
            data[i] = new int[cols];
    }

    // 释放内存
    void releaseMemory() {
        if (data) {
            for (int i = 0; i < rows; i++)
                delete[] data[i];
            delete[] data;
        }
    }
};

int main() {
    try {
        Matrix m1(3, 3);  // 创建一个 3x3 的矩阵
        m1.at(0, 0) = 1;  // 设置元素
        m1.at(1, 1) = 2;
        m1.at(2, 2) = 3;

        Matrix m2 = m1;  // 使用拷贝构造函数
        m2.at(0, 0) = 10;

        Matrix m3(3, 3);
        m3 = m1;  // 使用拷贝赋值操作符

        Matrix m4 = std::move(m1);  // 使用移动构造函数
        Matrix m5(3, 3);
        m5 = std::move(m2);  // 使用移动赋值操作符

        cout << "m1[0][0]: " << m1.at(0, 0) << endl;  // 可能输出未定义的行为，因为 m1 的数据已被移动
        cout << "m2[0][0]: " << m2.at(0, 0) << endl;  // 可能输出未定义的行为，因为 m2 的数据已被移动
        cout << "m3[0][0]: " << m3.at(0, 0) << endl;  // 输出 1
        cout << "m4[0][0]: " << m4.at(0, 0) << endl;  // 输出 1
        cout << "m5[0][0]: " << m5.at(0, 0) << endl;  // 输出 10

    } catch (const std::exception& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}