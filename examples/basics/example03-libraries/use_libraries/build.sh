build_tree="./build_tree"

# 生成构建系统
cmake -B $build_tree

# 构建项目
cmake --build $build_tree

# 运行编译后的程序
cd $build_tree
printf "Now, testing main_static.exe:\t"
./main_static.exe
printf "Now, testing main_shared.exe:\t"
./main_shared.exe
printf "Now, testing main_module.exe:\t"
./main_module.exe