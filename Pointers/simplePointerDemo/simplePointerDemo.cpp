#include <iostream>

void intModPtrFunc(int * intVarPtr) {
    *intVarPtr = *intVarPtr + 1;
}

void intModRefFunc(int & intVar) {
    intVar++;
}


int main() {
    int var1 = 20;
    int var2 = 34;
    int* intPtr = nullptr;

    intPtr = &var1; // intPtr --> &var1

    if( intPtr == nullptr ) {
        std::cout << "It's nullptr!" << std::endl;
    } else {
        std::cout << "It's an address! " << intPtr << std::endl;
    }

    std::cout << "This is the DATA pointed to by intPtr: " << *intPtr << std::endl;


    intPtr = &var2;     // intPtr --> &var2
    std::cout << "var2 is what? " << var2 << std::endl;
    std::cout << "This is the DATA pointed to by intPtr: " << *intPtr << std::endl;

    // Modify the data pointed to by intPtr
    *intPtr = *intPtr + 1;
    std::cout << "var2 is what? " << var2 << std::endl;
    std::cout << "This is the DATA pointed to by intPtr: " << *intPtr << std::endl;

    int var3 = 101;
    std::cout << "var3 is what? " << var3 << std::endl;
    intModRefFunc(var3);
    std::cout << "var3 is what? " << var3 << std::endl;

    intModPtrFunc(&var3);
    std::cout << "var3 is what? " << var3 << std::endl;

}