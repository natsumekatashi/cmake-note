# 创建对象库 hello。
# OBJECT: 编译 hello.cpp 后，CMake 会生成一个对应平台的对象文件 (Windows 系统上通常是 hello.obj; Unix-link 系统上通常是 hello.o)。
add_library(hello OBJECT 
    hello.cpp
#   more files in other directories
)
# 设置包含目录。
# PUBLIC: 包含目录不仅会被用于 hello 对象库，也会被传递给依赖于 hello 的其他目标。任何被链接到 hello 对象库的可执行文件或其他库，都会自动获取这个包含目录。
target_include_directories(hello PUBLIC .)