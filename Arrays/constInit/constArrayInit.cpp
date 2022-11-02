

#include <iostream>


int main() {
    int valToSet = 0;

    const int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    // Set the array values
    for( int count = 0; count < ARRAY_SIZE; count++) {
        numbers[count] = 99 + count;
    }

    // print out the array values
    for( int count = 0; count < ARRAY_SIZE; count++) {
        std::cout << numbers[count] << " | ";
    }

    std::cout << std::endl;

}