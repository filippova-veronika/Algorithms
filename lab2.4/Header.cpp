#include "Header.h"
#include <iostream> // ¬ключаем iostream здесь, а не в main.cpp

namespace MyFunctions {
    void processNumber(int num) {
        static int staticVar = 0;
        std::cout << "Sum: " << num + staticVar << std::endl;
        staticVar = num;
    }
}