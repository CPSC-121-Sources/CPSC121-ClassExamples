
#include <iostream>


void funcByRef( int& theValue ) {
    theValue = 30;
}

int weirdBothThings( int& theValue ) {
    int returnValue = theValue;
    theValue++;
    return returnValue;
}


int main() {
    int myValue = 100;

    std::cout << "myValue (before function): " << myValue << std::endl;
    funcByRef(myValue);
    std::cout << "myValue (after function): " << myValue << std::endl;

    int secondValue = weirdBothThings( myValue );
    std::cout << "MyValue (incremented): " << myValue << " | Second value (old value 30): " << secondValue << std::endl;
}