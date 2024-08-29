#include "Orchestra.h"
#include <iostream>

Orchestra::Orchestra() : maximum(0), instrument("") {} // default constructor

Orchestra::Orchestra(int size) : maximum(size), instrument("") {} // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() {
    return current.size();
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current.size(); i++) {  // 修正：初始化循环索引 i = 0
        if (current[i].get_instrument() == instrument) {  // 检查 Musician 的乐器
            return true;
        }
    }
    return false;  // 在循环结束后返回 false
}

// returns the array of members of the orchestra
Musician* Orchestra::get_members() {
  

    Musician* members = new Musician[current.size()];  // 动态分配一个Musician数组
    for (int i = 0; i < current.size(); i++) {  // 修正：初始化循环索引 i = 0
        members[i] = current[i];
    }
    return members;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician) {
    if (current.size() < maximum) {
        current.push_back(new_musician);
        return true;
    }
    return false;
}

Orchestra::~Orchestra() {
  
}