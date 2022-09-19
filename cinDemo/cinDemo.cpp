#include <iostream>


int main() {
    std::string userInput = "";
    std::string userInput2 = "";
    std::string userInput3 = "";

    std::cout << "What would you like to say? " <<std::endl;
    std::cin >> userInput;
    std::cin >> userInput2;
    getline(std::cin, userInput3);

    std::cout << "You Said: \"" << userInput << "\"" << std::endl;
    std::cout << "AND You Said: \"" << userInput2 << "\"" << std::endl;
    std::cout << "AND You Said: \"" << userInput3 << "\"" << std::endl;

}
