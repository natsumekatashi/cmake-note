# 指定 CMake 最低版本
cmake_minimum_required(VERSION 3.28)
# 定义语言和元数据
project(UseLibraries VERSION 1.0.0 LANGUAGES CXX)
# 添加包含目录
include_directories(calc)

# 链接静态库
# 指定静态库目标
link_directories("${CMAKE_SOURCE_DIR}/lib/static")
# 定义可执行目标
add_executable(main_static main.cpp)
# 链接静态库
target_link_libraries(main_static calc_static)

# 链接动态库
# 指定动态库目录
link_directories("${CMAKE_SOURCE_DIR}/lib/shared")
# 定义可执行目录
add_executable(main_shared main.cpp)
# 链接动态库
target_link_libraries(main_shared calc_shared)
# 复制 DLL 到可执行文件目录
add_custom_command(TARGET main_shared POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_SOURCE_DIR}/lib/shared/libcalc_shared.dll"
    $<TARGET_FILE_DIR:main_shared>
)

# 链接共享模块
# [备注]: 
#   - 1. 本项目中的链接共享模块可执行文件无法正常运行，会报 GetProcAddress failed with error 0 的错误。
#   - 2. 本项目 lib 目录下的库均由 C++ 编译器生成。导致源代码调用 dlopen/LoadLibrary 解析这类库时，会遇到命名修饰问题，进而出现 GetProcAddress failed with error 0 错误。
#       - C++ 编译器会对函数名称进行修饰，这与 C 语言不同。
#       - 当使用 dlopen/LoadLibrary 加载 C++ 编译的共享模块/共享库，并尝试获取函数地址时，如果函数没有使用 extern "C" 进行声明，会导致无法找到正确的符号名称。
# 指定共享模块目录
link_directories("${CMAKE_SOURCE_DIR}/lib/module")
# 定义可执行目标
add_executable(main_module main_moudle.cpp)
# 链接共享模块
target_link_libraries(main_module calc_module)
