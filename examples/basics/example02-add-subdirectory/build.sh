# 生成构建系统
cmake -B build

# 构建项目
printf "\n"
cmake --build build

# 运行可执行文件
printf "\n"
cd build
./main.exe
