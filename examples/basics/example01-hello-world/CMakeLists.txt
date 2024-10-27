# 指定最低 CMake 版本。
cmake_minimum_required(VERSION 3.28)
# 指定项目语言、项目属性。
project(Hello VERSION 1.0.0 LANGUAGES CXX)

# 指定一个可执行目标。它由源文件编译而成，最终生成一个可执行文件。
add_executable(Hello hello.cpp)