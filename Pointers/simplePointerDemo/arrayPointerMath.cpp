#include <iostream>



int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int * arrPtr = nullptr;
    arrPtr = arr;

    std::cout << "arr address: " << arr << std::endl;
    std::cout << "arrPtr address: " << arrPtr << std::endl;

    std::cout << "*arrPtr = " << *arrPtr << std::endl;

    arrPtr++;
    std::cout << "arrPtr address: " << arrPtr << std::endl;
    std::cout << "*arrPtr = " << *arrPtr << std::endl;

    arrPtr++;
    std::cout << "arrPtr address: " << arrPtr << std::endl;
    std::cout << "*arrPtr = " << *arrPtr << std::endl;

    arrPtr--;
    std::cout << "arrPtr address: " << arrPtr << std::endl;
    std::cout << "*arrPtr = " << *arrPtr << std::endl;

    *arrPtr = 32;
    std::cout << "arr[1] is what? " << arr[1] << std::endl;

    std::cout << "Magic!" << std::endl;
    std::cout << "arrPtr[2]: " << arrPtr[2] << std::endl;

}