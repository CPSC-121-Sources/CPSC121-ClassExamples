#include <iostream>

int main() {
    const int arrayRows = 4;
    const int arrayCols = 6;
    int myArray[arrayRows][arrayCols];

    // Initialize the array
    for( int row = 0; row < arrayRows; row++ ) {
        for( int col = 0; col < arrayCols; col++ ) {
            myArray[row][col] = row * 10 + col;
        }
    }

    // Now print em!
    for( int row = 0; row < arrayRows; row++ ) {
        for( int col = 0; col < arrayCols; col++ ) {
            std::cout << "[" << row << "][" << col << "]: " << myArray[row][col] << std::endl;
        }
    }
}