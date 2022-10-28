
#include <iostream>

#include "calculationFuncs.h"

int main() {
    std::cout << "This is the main function" << std::endl;

    int result = sumTwo(10, 51);
    std::cout << "Result: " << result << std::endl;

    int subResult = subTwo(50, 26);
    std::cout << "SubResult: " << subResult << std::endl;
}