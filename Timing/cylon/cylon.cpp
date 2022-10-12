#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    int intervalDeltaTime_ms = 500;

    for( int counter = 0; counter < 100; counter++ ) {
        // cout << "Count step #" << counter << endl;
        sleep_for(milliseconds(intervalDeltaTime_ms));
        //int currSpacesNeeded = counter % 10;
        // for( int spaceCount = 0; spaceCount < currSpacesNeeded; spaceCount++ ) {
        //    cout << " ";
        //}
        cout << "\r";
        for(int wipeoutCounter = 0; wipeoutCounter < 100; wipeoutCounter++) {
            cout << " ";
        }
        cout << "\r";

        for( int spacesNeeded = 0; spacesNeeded < counter; spacesNeeded++ ) {
            cout << " ";
        }
        cout << "@";
        cout << "\r";
        cout << flush;
    }
    cout << endl;
}

void testing() {
    for(int wipeoutCounter = 0; wipeoutCounter < 100; wipeoutCounter++) {
        cout << " ";
    }
    cout << "\r";


}