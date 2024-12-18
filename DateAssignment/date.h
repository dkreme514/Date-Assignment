//
// Created by Donnie on 1/28/2023.
//

#ifndef DATEASSIGNMENT_DATE_H
#define DATEASSIGNMENT_DATE_H
#include <iomanip>
#include <string>
using namespace std;

const int DEFAULT_MONTH=1;
const int DEFAULT_DAY=1;
const int DEFAULT_YEAR=2000;

class Date {
    static const string MONTHS[13];
    static const int DAYS_IN_MONTH[13];
    static const int DEFAULT_MONTH=1;
    static const int DEFAULT_DAY=1;
    static const int DEFAULT_YEAR=2000;
public:
    // Constructors
    Date();     // Default Constructor
    Date(int m, int d=DEFAULT_DAY, int y=DEFAULT_YEAR);
    Date(int m);
    
    // Accessor Methodds
    int GetMonth() const;
    int GetDay() const ;
    int GetYear() const;
    char GetFormat() const;
    void output() const;

    // Mutator methods
    bool set (int m, int d, int y);
    void SetFormat(char f);	

 // Utility methods
    void Show() const;                       // Display the date in the selected format
    void input();                            // Prompt user for input and validate date
    void Increment(int days = 1);            // Increment the date by a number of days
    int Compare(const Date& other) const;    // Compare this date with another date
private:
    int month;
    int day;
    int year;
    char format;
};

#endif //DATEASSIGNMENT_DATE_H
