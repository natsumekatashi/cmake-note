# 指定最低 CMake 版本。
cmake_minimum_required(VERSION 3.28)
# 设置项目属性。
project(Hello VERSION 1.0.0 LANGUAGES CXX)

# 定义可执行文件 Hello。
add_executable(Hello main.cpp)

# 将 hello 目录添加到 CMake 构建过程中。
add_subdirectory(hello)

# 为可执行文件 Hello 链接库。
# PRIVATE: 链接是私有的。hello 库仅会被链接到 Hello 可执行文件，而不会传递给依赖于 Hello 的可执行文件或其他库。
target_link_libraries(Hello PRIVATE hello)