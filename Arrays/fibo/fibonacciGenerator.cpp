
#include <iostream>



int main() {
    const int ARRAY_SIZE = 10;
    int sequence[ARRAY_SIZE];

    sequence[0] = 0;
    sequence[1] = 1;

    for( int count = 2; count < ARRAY_SIZE; count++ ) {
        sequence[count] = sequence[count - 1] + sequence[count - 2];
    }


    for( int count = 0; count < ARRAY_SIZE; count++ ) {
        std::cout << sequence[count] << " | ";
    }

    std::cout << std::endl;

}