# 指定最低 CMake 版本。
cmake_minimum_required(VERSION 3.28)
# 设置项目属性。
project(Hello VERSION 1.0.0 LANGUAGES CXX)

# 定义可执行文件。
add_executable(Hello hello.cpp)