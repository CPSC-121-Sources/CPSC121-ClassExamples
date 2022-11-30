#include <iostream>



int main() {
    char myChar = 'c';
    char * myCharPtr = &myChar;

    std::cout << "Mychar value: " << *myCharPtr << std::endl;

    std::string myStr = "DisAlongString";
    std::cout << "String value: " << myStr << std::endl;

    char myCharStr[] = "YIsAlsoALetter";    // C string.  char * 
    std::cout << "Char string: " << myCharStr << std::endl;

    myCharPtr = myCharStr;
    std::cout << "Char string: " << myCharPtr << std::endl;
    myCharPtr++;
    std::cout << "Char string: " << myCharPtr << std::endl;

    char myNull = '\0';
    myCharStr[8] = '\0';
    std::cout << "Char string: " << myCharStr << std::endl;

    const char * newCStrPtr = myStr.c_str();
    std::cout << "Underlying C string from myStr via ptr is: " << newCStrPtr << std::endl;

}