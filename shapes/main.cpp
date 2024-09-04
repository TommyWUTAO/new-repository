#include <iostream>
#include "shape.h"

int main() {
    ShapeCollection collection;

    // 添加一个矩形 (宽=3, 高=4)
    collection.addShape(new Rectangle(3, 4));

    // 添加一个圆 (半径=5)
    collection.addShape(new Circle(5));

    // 添加另一个矩形 (宽=6, 高=2)
    collection.addShape(new Rectangle(6, 2));

    // 显示所有形状的总面积和周长
    std::cout << "所有形状的总面积: " << collection.total_area() << std::endl;
    std::cout << "所有形状的总周长: " << collection.total_perimeter() << std::endl;

    // 移除第一个矩形
    Rectangle* rectToRemove = new Rectangle(3, 4);
    collection.removeShape(rectToRemove);  // 移除形状
    delete rectToRemove;  // 释放手动创建的矩形

    // 再次显示所有形状的总面积和周长
    std::cout << "\n移除后的总面积: " << collection.total_area() << std::endl;
    std::cout << "移除后的总周长: " << collection.total_perimeter() << std::endl;

    return 0;
}