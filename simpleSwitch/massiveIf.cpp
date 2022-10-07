
#include <iostream>

int main() {
    int digit = 2;

    if( digit == 0 ) {
        std::cout << "Is zero" << std::endl;
    }
    else if( digit == 1 ) {
        std::cout << "Is one" << std::endl;
    }
    else if( digit == 2 ) {
        std::cout << "Is two" << std::endl;
    }

    switch(digit) {
        case 0:
            std::cout << "Is zero" << std::endl;
            break;
        case 1:
            std::cout << "Is one" << std::endl;
            break;

    }

    std::string myNum = "55";
    std::string myName = "Hello World Aaron";



}