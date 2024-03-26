#include <iostream>
using namespace std;

bool LeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int countLeapYears(int start_Year, int end_Year) {
    if (start_Year > end_Year) {
        return 0;
    }

    return LeapYear(start_Year) + countLeapYears(start_Year + 1, end_Year);
}

int main() {
    int start_Year, end_Year;
    
    cout << "Enter the start year: ";
    cin >> start_Year;

    cout << "Enter the end year: ";
    cin >> end_Year;

    int leapYearCount = countLeapYears(start_Year, end_Year);
    cout << "Number of leap years between " << start_Year << " and " << end_Year << " is: " << leapYearCount << endl;

    return 0;
}
