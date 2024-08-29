#include "Orchestra.h"
#include <iostream>

int main() {
    // 创建 Musician 对象
    Musician play1("piano", 10);
    std::cout << play1.get_instrument() << "  " << play1.get_experience() << std::endl;

    Musician play2("pianos", 10);
    std::cout << play2.get_instrument() << "  " << play2.get_experience() << std::endl;

    // 创建 Orchestra 对象
    Orchestra orchestra(3);

    // 输出当前成员数量
    std::cout << "Current number of members: " << orchestra.get_current_number_of_members() << std::endl;

    // 检查是否有 "piano" 乐器
    std::cout << "Has piano: " << (orchestra.has_instrument("piano") ? "Yes" : "No") << std::endl;

    // 添加音乐家到乐团
    orchestra.add_musician(play1);
    orchestra.add_musician(play2);

    // 获取并输出乐团成员
    Musician* members = orchestra.get_members();
    int member_count = orchestra.get_current_number_of_members();

    std::cout << "Members of the orchestra:" << std::endl;
    for (int i = 0; i < member_count; ++i) {
        std::cout << "Musician " << i + 1 << ": " << members[i].get_instrument() << std::endl;
    }

    // 释放动态分配的成员数组
    delete[] members;

    return 0;
}