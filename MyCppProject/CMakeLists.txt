cmake_minimum_required(VERSION 3.5)
project(CppStore)

set(CMAKE_CXX_STANDARD 14)

# 添加 Crow 和 Asio 的头文件路径
include_directories(include)  # 指向 include 文件夹

# 添加可执行文件
add_executable(CppStore main.cpp)

# 链接 Boost 库（如果需要）
find_package(Boost REQUIRED)
target_link_libraries(CppStore Boost::boost)