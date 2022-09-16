
#include <iostream>
#include <bitset>

int main() {
    int binNumber = 0b00000000000000000000000000000011;
    int binNumber2 = 0;

    std::cout << binNumber << std::endl;
    std::cout << std::bitset<32>(binNumber) << std::endl;
    std::cout << &binNumber << std::endl;
    std::cout << &binNumber2 << std::endl;

}
