# 生产构建系统
cmake -B build

# 构建项目
printf "\n"
cmake --build build

# 运行编译后的程序
printf "\n"
cd build
./Hello.exe
