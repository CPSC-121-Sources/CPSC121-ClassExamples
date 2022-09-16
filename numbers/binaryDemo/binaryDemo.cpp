
#include <iostream>
#include <bitset>

int main() {
    int binNumber = 0b00000001;

    std::cout << binNumber << std::endl;
    std::cout << std::bitset<8>(binNumber) << std::endl;

}
