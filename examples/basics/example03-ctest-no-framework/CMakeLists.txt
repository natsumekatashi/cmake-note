# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.28)
# 设置项目属性
project(CTestNoFramework)
# 启用测试模块
include(CTest)

# 添加子目录
add_subdirectory(src bin)
add_subdirectory(test)