# 生成一个全局可见目标 calc 
add_library(calc OBJECT calc.cpp)

# 将 calc 目录添加到其公共包含目录中
# main.cpp 可以在不提供相对路径的情况下使用 calc 目录下的头文件 (如: main.cpp 直接调用 #include "calc.h")
target_include_directories(calc PUBLIC .)