# 生成构建系统
cmake -B build

# 构建项目
printf "\n"
cmake --build build

# 运行 bin 可执行文件
printf "\n"
cd build
cd bin
./main.exe

# 运行 test 可执行文件
printf "\n"
cd ..
cd test
./unit_tests.exe 1
./unit_tests.exe 2

# 运行 CTest 测试
printf "\n"
cd ..
ctest
