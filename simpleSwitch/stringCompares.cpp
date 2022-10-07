#include <iostream>


int main() {
    std::string one = "Aaron";
    std::string two = "";

    std::cout << "Enter name: ";
    std::cin >> two;

    if( one != two ) {
        std::cout << "They not same!" << std::endl;
    } else {
        std::cout << "Are same! :-(" << std::endl;
    }



}