#include <cstdlib>
#include "calc.h"

void SumAddsTowIntegers() {
    if (3 != add(1, 2)) {
        std::exit(EXIT_FAILURE);
    }
}

void MultiplyMultipliesTwoIntegers() {
    if (2 != multiply(1, 2)) {
        std::exit(EXIT_FAILURE);
    }
}