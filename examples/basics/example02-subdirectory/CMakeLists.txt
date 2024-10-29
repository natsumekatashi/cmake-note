# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.28)
# 定义语言和元数据
project(SubDirectory VERSION 1.0.0 LANGUAGES CXX)
# 定义可执行目标
add_executable(main main.cpp)
# 添加子目录
add_subdirectory(calc)
# 可执行目标链接指定库
target_link_libraries(main PRIVATE calc)