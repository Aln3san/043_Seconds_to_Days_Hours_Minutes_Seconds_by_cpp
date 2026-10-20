#include <iostream>
#include <cmath>

using namespace std;

// Variables
const int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
unsigned int TotalSeconds;

unsigned short int NumberOfDays(unsigned int TotalSeconds) {
    return TotalSeconds / SecondsPerDay;
}


unsigned short int NumberOfHours(unsigned int TotalSeconds) {
    unsigned int Remainder = TotalSeconds % SecondsPerDay;
    return Remainder / SecondsPerHour;
}

unsigned short int NumberOfMinutes(unsigned int TotalSeconds) {
    unsigned int Remainder = TotalSeconds % SecondsPerHour;
    return Remainder / SecondsPerMinute;
}

unsigned short int NumberOfSeconds(unsigned int TotalSeconds) {
    return TotalSeconds % SecondsPerMinute;
}

int main()
{
    cout << "Please Enter Total Seconds to change it to day, hourse, minutes and seconds\n"
        << "Total Seconds: "; cin >> TotalSeconds;

    cout << NumberOfDays(TotalSeconds) << ":" << NumberOfHours(TotalSeconds) << ":" << NumberOfMinutes(TotalSeconds) << ":" << NumberOfSeconds(TotalSeconds) << endl;

}

