build_tree="./build_tree"

# 生成构建系统
cmake -B $build_tree

# 构建项目
cmake --build $build_tree

# 运行编译后的程序
cd $build_tree
./main.exe