
#include <iostream>

using namespace std;

int main() {
    const int NUMBER_OF_PEOPLE = 8;
    int priorInt = 15;
    double nextInt = 255;
    int peopleAges[NUMBER_OF_PEOPLE];

    // peopleAges = 5;      // Does this work? No. Why not?

    peopleAges[0] = 11;
    peopleAges[1] = 15;
    peopleAges[2] = 16;
    peopleAges[3] = 18;
    peopleAges[4] = 20;
    peopleAges[5] = 21;
    peopleAges[6] = 29;
    peopleAges[7] = 44;

    cout << "First kid: " << peopleAges[0] << endl;
    cout << "Third kid: " << peopleAges[2] << endl;
    //cout << "What's there?: " << peopleAges[NUMBER_OF_PEOPLE + 1] << endl;

    //cout << "Prior int: " << &priorInt << endl;
    //cout << "Next int: " << &nextInt << endl;
    //cout << "Number of people int: " << &NUMBER_OF_PEOPLE << endl;
    //cout << "All? " << peopleAges << endl;  // EH?
    // cout << "Prior int: " << peopleAges[-2] << endl;
    // cout << "Next int: " << peopleAges[-1] << endl;

}