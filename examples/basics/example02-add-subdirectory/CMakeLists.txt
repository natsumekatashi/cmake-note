# 指定最低 CMake 版本
cmake_minimum_required(VERSION 3.28)
# 设置项目属性
project(AddSubdirectory VERSION 1.0.0 LANGUAGES CXX)

# 定义可执行文件
add_executable(main main.cpp)

# 添加子目录
add_subdirectory(calc)
# 指定链接库
target_link_libraries(main PRIVATE calc)