#include <iostream>

const int arrayRows = 9;
const int arrayCols = 9;

using namespace std;

void printBoard(int sudokuBoard[][arrayCols]) {
    for( int row = 0; row < arrayRows; row++ ) {
        if( row % 3 == 0) {
            cout << "-------------------" << endl;
        }
        for( int col = 0; col < arrayCols; col++ ) {
            if( col % 3 == 0 ) {
                cout << "|";
            } else {
                cout << " ";
            }
            cout << sudokuBoard[row][col];
        }
        cout << "|" << endl;

    }
    cout << "-------------------" << endl;
}

int main() {

    int sudokuBoard[arrayRows][arrayCols] =
        {
            {0, 6, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 6, 5, 1, 0, 0, 0},
            {1, 0, 7, 0, 0, 0, 6, 0, 2},
            {6, 2, 0, 3, 0, 5, 0, 9, 4},
            {0, 0, 3, 0, 0, 0, 2, 0, 0},
            {4, 8, 0, 9, 0, 7, 0, 3, 6},
            {9, 0, 6, 0, 0, 0, 4, 0, 8},
            {0, 0, 0, 7, 9, 4, 0, 0, 0},
            {0, 5, 0, 0, 0, 0, 0, 7, 0},
        };

    printBoard(sudokuBoard);
}