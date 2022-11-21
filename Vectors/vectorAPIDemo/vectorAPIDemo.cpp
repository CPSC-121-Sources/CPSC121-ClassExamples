#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vectorCopy) {
    cout << "Doing printVector" << endl;
    for( int currNumber : vectorCopy ) {
        cout << currNumber << endl;
    }
    cout << "printVector done" << endl;
}


void appendToVector(vector<int> vectorPassedIn, int valueToAppend) {
    cout << "Doing Append to vector with value " << valueToAppend << endl;
    vectorPassedIn.push_back(valueToAppend);
    printVector(vectorPassedIn);
    cout << "Append to vector done" << endl;

}


int main() {
    int valA = 50;

    vector<int> myNumbers;

    myNumbers.push_back(25);
    myNumbers.push_back(27);
    myNumbers.push_back(29);

    for( int currNumber : myNumbers ) {
        cout << currNumber << endl;
    }

    cout << "The value at index 1 (array notation) is: " << myNumbers[1] << endl;
    cout << "The value at index 1 (method call at) is: " << myNumbers.at(1) << endl;

    cout << "My vector has how many elements? --> " << myNumbers.size() << endl;

    cout << "What's the first value in the vector? --> " << myNumbers.front() << endl;
    cout << "What's the last value in the vector? --> " << myNumbers.back() << endl;

    cout << "Now let's play with functions" << endl;

    printVector(myNumbers);
    appendToVector(myNumbers, 33);

    cout << "How did that append to vector work? Is my 33 there in myNumbers? " << endl;
    printVector(myNumbers);
    cout << "What? Where did the 33 go? " << endl;


    cout << "Is my vector empty? " << myNumbers.empty() << endl;
    myNumbers.clear();
    cout << "How about now after clearing? " << myNumbers.empty() << endl;



}