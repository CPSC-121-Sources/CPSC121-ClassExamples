// This program displays the number of days in each month.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MONTHS = 12;
    int days[MONTHS] = { 31, 28, 31, 30,
                         31, 30, 31, 31,
                         30, 31, 30, 31};

    string monthNames[MONTHS] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August", "September",
        "Spooktober", "November", "December"
    };

    for (int count = 0; count < MONTHS; count++)
    {
        cout << "Month " << setw(2) << (count + 1) << " has ";
             //<< " (" << monthNames[count] << ") has ";
        cout << days[count] << " days.\n";
    }


    return 0;
}