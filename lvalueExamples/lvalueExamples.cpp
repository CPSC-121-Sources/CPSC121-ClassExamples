

#include <iostream>

void setVal(int& valToSet) {
    valToSet = 7;
}

void swapInts(int& first, int& second) {
    int buffer = first;
    first = second;
    second = buffer;
}

int main() {
    int valToSet = 0;

    std::cout << "Val value: " << valToSet << std::endl;
    setVal(valToSet);
    std::cout << "Val value: " << valToSet << std::endl;

    int first = 11;
    int second = 80;

    std::cout << "First: " << first << "  | second: " << second << std::endl;
    swapInts(first, second);
    std::cout << "First: " << first << "  | second: " << second << std::endl;

}