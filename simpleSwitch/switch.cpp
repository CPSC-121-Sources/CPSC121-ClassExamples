

#include <iostream>

int main() {
    char input = 'b';

    switch(input) {
        case 'a':
            std::cout << "You entered 'a'" << std::endl;
            break;
        case 'b':
            std::cout << "You entered 'b'" << std::endl;
            break;
        case 'c':
            std::cout << "You entered 'c'" << std::endl;
            break;
        default:
            std::cout << "Invalid entry case with: " << input << std::endl;
            break;
    }
}
