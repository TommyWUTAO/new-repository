#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

#ifndef PI
#define PI 3.14159  // 定义 PI
#endif

// 抽象基类 shape
class shape {
public:
    virtual ~shape();  // 虚析构函数，确保派生类的正确销毁
    virtual int area() = 0;  // 纯虚函数，要求派生类实现
    virtual int perimeter() = 0;  // 纯虚函数，要求派生类实现
};

// Rectangle 类继承自 shape
class Rectangle : public shape {
private:
    int width, height;

public:
    Rectangle();
    Rectangle(int width, int height);
    int area() ;  // 实现 area 函数
    int perimeter() ;  // 实现 perimeter 函数
    ~Rectangle();
};

// Circle 类继承自 shape
class Circle : public shape {
private:
    int radius;

public:
    Circle();
    Circle(int r);
    int area() ;  // 实现 area 函数
    int perimeter() ;  // 实现 perimeter 函数
    ~Circle();
};

// ShapeCollection 类，不继承自 shape
class ShapeCollection {
private:
    std::vector<shape*> collection;

public:
    bool addShape(shape* _shape);
    bool removeShape(shape* _shape);
    int total_area();
    int total_perimeter();
    ~ShapeCollection();  // 确保释放所有 shape 对象
};

#endif  // SHAPE_H