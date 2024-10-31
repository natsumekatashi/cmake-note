#include <iostream>
#include <windows.h>
#include "calc.h"

using FuncAdd = int (*)(int, int);

int main() {
    HMODULE hModule = LoadLibrary("../lib/module/libcalc_module.dll");
    if (hModule == nullptr) {
        std::cerr << "LoadLibrary failed with error " << GetLastError() << std::endl;
        return EXIT_FAILURE;
    }

    FuncAdd funcAdd = (FuncAdd)GetProcAddress(hModule, "add");
    if (funcAdd == nullptr) {
        std::cerr << "GetProcAddress failed with error " << GetLastError() << std::endl;
        FreeLibrary(hModule);
        return EXIT_FAILURE;
    }

    std::cout << funcAdd(1, 2) << std::endl;

    FreeLibrary(hModule);

    return 0;
}