#include "shape.h"
#include <cmath>  // 如果需要用 M_PI 可以包括 <cmath>

// shape 类的虚析构函数
shape::~shape() {}

// Rectangle 类的实现
Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

int Rectangle::area() {
    return width * height;  // 矩形的面积
}

int Rectangle::perimeter() {
    return 2 * (width + height);  // 矩形的周长
}

Rectangle::~Rectangle() {}

// Circle 类的实现
Circle::Circle() : radius(0) {}

Circle::Circle(int r) : radius(r) {}

int Circle::area() {
    return static_cast<int>(PI * radius * radius);  // 圆的面积
}

int Circle::perimeter() {
    return static_cast<int>(2 * PI * radius);  // 圆的周长
}

Circle::~Circle() {}

// ShapeCollection 类的实现
bool ShapeCollection::addShape(shape* _shape) {
    collection.push_back(_shape);
    return true;
}

bool ShapeCollection::removeShape(shape* _shape) {
    for (size_t i = 0; i < collection.size(); i++) {
        if (collection[i] == _shape) {
            delete collection[i];  // 释放内存
            collection.erase(collection.begin() + i);  // 保持顺序
            return true;
        }
    }
    return false;
}

int ShapeCollection::total_area() {
    int area = 0;
    for (size_t i = 0; i < collection.size(); i++) {
        area += collection[i]->area();
    }
    return area;
}

int ShapeCollection::total_perimeter() {
    int perimeter = 0;
    for (size_t i = 0; i < collection.size(); i++) {
        perimeter += collection[i]->perimeter();
    }
    return perimeter;
}

// ShapeCollection 的析构函数，确保所有形状被释放
ShapeCollection::~ShapeCollection() {
    for (size_t i = 0; i < collection.size(); i++) {
        delete collection[i];  // 释放每个 shape 对象
    }
}