
#include <iostream>


void func( int arr[] ) {
    arr[2] = 25;
}


int main() {
    int myArr[5] = {1, 2, 3, 4, 5};

    std::cout << "Val (before func): " << myArr[2] << std::endl;

    func(myArr);

    std::cout << "Val (after func): " << myArr[2] << std::endl;

}