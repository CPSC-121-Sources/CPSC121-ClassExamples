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

        // for( int clearCounter = 0; clearCounter < 40; clearCounter++ ) {
        //    cout << endl;
        //}

        for( int spacesNeeded = 0; spacesNeeded < counter; spacesNeeded++ ) {
            cout << " ";
        }
        cout << "@";
        cout << endl;
    }
}