

#include <iostream>


int main() {
    int a;
    std::cout << "Testing cin" << std::endl;

    std::string userInput = "";

    std::cout << "What would you like to say? ";
    std::cin >> userInput;

    std::cout << "User wrote: \"" << userInput << "\"" << std::endl;

    getline(std::cin, userInput);
    std::cout << "User wrote: \"" << userInput << "\"" << std::endl;


}