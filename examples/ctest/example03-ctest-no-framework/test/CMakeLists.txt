# 定义可执行文件
add_executable(unit_tests
    unit_tests.cpp calc_test.cpp
    ../src/calc.cpp
)

# 添加包含目录
# src 目录只用于构建 unit_tests
target_include_directories(unit_tests PRIVATE ../src)

# 定义测试用例
add_test(NAME SumAddsTowIntegers COMMAND unit_tests 1)
add_test(NAME MultiplyMultipliesTwoIntegers COMMAND unit_tests 2)
