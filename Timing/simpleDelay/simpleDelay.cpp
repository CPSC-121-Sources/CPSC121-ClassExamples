#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    int delayOneSecond_ms = 1000;
    int delayThreeSeconds_ms = 3000;
    cout << "Starting - wait 1 second" << endl;
    sleep_for(milliseconds(delayOneSecond_ms));   // Wait 1 second (1000 milliseconds)

    cout << "Now waiting 3 more sec" << endl;
    sleep_for(milliseconds(delayThreeSeconds_ms));   // Wait 3 seconds (3000 milliseconds)
    cout << "Done." << endl;
}
