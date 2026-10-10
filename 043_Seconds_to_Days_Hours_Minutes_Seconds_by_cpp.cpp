#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    const int SecondsPerDay = 24 * 60 * 60, SecondsPerHour = 60 * 60, SecondsPerMinute = 60;
    unsigned int TotalSeconds;
    cout << "Please Enter Total Seconds to change it to day, hourse, minutes and seconds\n"
        << "Total Seconds: "; cin >> TotalSeconds;

    unsigned short int NumberOfDays = TotalSeconds / SecondsPerDay;
    unsigned int Remainder = TotalSeconds % SecondsPerDay;

    unsigned short int NumberOfHours = Remainder / SecondsPerHour;
    Remainder = Remainder % SecondsPerHour;

    unsigned short int NumberOfMinutes = Remainder / SecondsPerMinute;
    Remainder = Remainder % SecondsPerMinute;

    unsigned short int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;

}

