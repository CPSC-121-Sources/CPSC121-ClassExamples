#include <iostream>


int main() {
    char userChoice = ' ';
    std::string animalChosen = "";

    std::cout << "Choose one: \n(a) Hippopotamus\n(b) Rat\n(c) Giraffee" << std::endl;
    std::cout << std::endl;
    std::cout << "Your choice: ";

    std::cin >> userChoice;

    std::cout << "Your choice was: " << userChoice << std::endl;

    int score = 0;

    switch(userChoice) {
        case 'a': animalChosen = "Hippopotamus"; break;
        case 'j': score = score + 100;
        case 'b': animalChosen = "Rat"; break;
        case 'c': animalChosen = "Giraffe"; break;
        default: animalChosen = "Dog"; break;
    }

    std::cout << "Your choice was: " << animalChosen << std::endl;

    if( userChoice == 'a' ) {
        std::cout << "Hippo goes Roar!" << std::endl;
    }

    if( animalChosen == "Hippopotamus" ) {
        std::cout << "Hippo goes Roar!" << std::endl;
    }

}