# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.28)
# 定义语言和元数据
project(Libraries VERSION 1.0.0 LANGUAGES CXX)

# 定义静态库
# Windows: .lib; Unix: .a
add_library(calc_static STATIC calc.cpp)

# 定义共享库（动态库）
# Windows: .dll; Unix: .so; macOS: .dylib
add_library(calc_shared SHARED calc.cpp)

# 定义共享模块
# 通常，共享模块与共享库使用相同的扩展名，但不总是如此。
add_library(calc_module MODULE calc.cpp)