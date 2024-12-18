//
// Created by Donnie on 1/31/2023.
//
#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

// Initialize the static MONTHS array
const string Date::MONTHS[13] = {
    " ", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

const int Date::DAYS_IN_MONTH[13] = { 
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 
};

// Constructors
Date::Date(): month(DEFAULT_MONTH), day(DEFAULT_DAY), year(DEFAULT_YEAR), format('D')
{
 
}
Date::Date(int m, int d, int y): month(m), day(d), year(y), format('D')
{
    set(m,d,y);
}

int Date::GetMonth() const
{
    return month;
}

int Date::GetDay() const
{
    return day;
}
int Date::GetYear() const
{
    return year;
}
char Date::GetFormat() const
{
    return format;
}
/*
void Date::setMonth(const int m)
{
    if (m>=0 && m<=12)
    month=m;
    else
        month=DEFAULT_MONTH;
}
void Date::setDay(const int m)
{
    if (m>=0 && m<=12)
        month=m;
    else
        month=DEFAULT_MONTH;
}
*/
bool Date::set(int m, int d, int y) {
    if (m < 1 || m > 12) return false;  // Invalid month
    if (d < 1 || d > DAYS_IN_MONTH[m]) return false;  // Invalid day
    if (m == 2 && d == 29) {  // Check for leap year
        if (!((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))) {
            return false;  // Not a leap year
        }
    }
    month = m;
    day = d;
    year = y;
    return true;
}
void Date::SetFormat(char f) {
    if (f == 'D' || f == 'L' || f == 'T' || f == 'J') {
        format = f;
    } else {
        format = 'D';  // Default 
    }
}

void Date::Show() const {
    switch (format) {
        case 'D':  // Default: MM/DD/YYYY
            cout << setw(2) << setfill('0') << month << '/'
                 << setw(2) << setfill('0') << day << '/'
                 << year << endl;
            break;
        case 'L':  // Long: Month DD, YYYY
            cout << MONTHS[month] << " " << day << ", " << year << endl;
            break;
        case 'T':  // Two-digit: MM/DD/YY
            cout << setw(2) << setfill('0') << month << '/'
                 << setw(2) << setfill('0') << day << '/'
                 << (year % 100) << endl;
            break;
        case 'J':  // Julian: YYYY-DDD
            int dayOfYear = day;
            for (int i = 1; i < month; ++i) {
                dayOfYear += DAYS_IN_MONTH[i];
            }
            if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
                dayOfYear++;  // Add leap day
            }
            cout << year << '-' << dayOfYear << endl;
            break;
    }
}

void Date::input() {
    int m, d, y;
    cout << "Enter month, day, and year (MM DD YYYY): ";
    cin >> m >> d >> y;
    if (!set(m, d, y)) {
        cout << "Invalid date entered. Using default date.\n";
        month = DEFAULT_MONTH;
        day = DEFAULT_DAY;
        year = DEFAULT_YEAR;
    }
}
void Date::Increment(int days) {
    while (days > 0) {
        int daysInCurrentMonth = DAYS_IN_MONTH[month];
        if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 
		400 == 0))) {
            daysInCurrentMonth++;  // Leap year adjustment
        }
        if (day + days <= daysInCurrentMonth) {
            day += days;
            return;
        } else {
            days -= (daysInCurrentMonth - day + 1);
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }
}
int Date::Compare(const Date& other) const {
    if (year < other.year || (year == other.year && (month < other.month 
|| (month == other.month && day < other.day)))) {
        return -1;  // This date is earlier
    } else if (year == other.year && month == other.month && day == 
other.day) {
        return 0;  // Dates are equal
    } else {
        return 1;  // This date is later
    }
}




//void input();
//void output() const;*/
