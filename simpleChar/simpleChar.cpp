#include <iostream>

int main() {
    char myChar = 'g';

    std::cout << myChar << std::endl;

    // It'll "work", but not correctly - overflow conversion warning
    char longerChar = 'hh';
    std::cout << longerChar << std::endl;

}
