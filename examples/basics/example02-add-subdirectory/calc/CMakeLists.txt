# 定义对象库
# 编译 calc.cpp 后，CMake 会生成一个对象文件 (Windows: hello.obj; Unix-link: hello.o)
add_library(calc OBJECT calc.cpp)

# 添加包含目录
# main.cpp 可以使用 #include "calc.h" 这类方式，导入子目录下的头文件 
target_include_directories(calc PUBLIC .)