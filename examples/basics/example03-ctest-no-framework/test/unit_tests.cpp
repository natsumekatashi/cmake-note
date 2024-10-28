#include <string>

void SumAddsTowIntegers();
void MultiplyMultipliesTwoIntegers();

int main(int argc, char **argv) {
    if (argc < 2 || argv[1] == std::string("1")) {
        SumAddsTowIntegers();
    }

    if (argc < 2 || argv[1] == std::string("2")) {
        MultiplyMultipliesTwoIntegers();
    }

    return 0;
}