# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.28)
# 定义语言和元数据
project(Hello VERSION 1.0.0 LANGUAGES CXX)
# 定义可执行目标
add_executable(main main.cpp)