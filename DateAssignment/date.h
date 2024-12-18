//
// Created by Donnie on 1/28/2023.
//

#ifndef DATEASSIGNMENT_DATE_H
#define DATEASSIGNMENT_DATE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

static const int DEFAULT_MONTH=1;
static const int DEFAULT_DAY=1;
static const int DEFAULT_YEAR=2000;

class Date {
    const string MONTHS[13] {" ", "January", "February", "March", "April", "May", "June", "July", "August", "Septe,ber", "October", "November", "December" };

    static const int DEFAULT_MONTH=1;
    static const int DEFAULT_DAY=1;
    static const int DEFAULT_YEAR=2000;

 public:
    int Days_in_Month[13] {0,31,28,31,30,31,30,31,31,30,31,30,31};
   // Date(const int m, const int d, const int y);
    Date();     // Default Constructor
  /*  void set(const int newMonth);
    void set(const int newMonth, const int newDay);
    void set(const int newMonth, const int newDay, const int newYear);
    void setMonth();
*/
    int GetMonth();
    int GetDay();
    int GetYear();
    char GetFormat();
    void input();
    void output() const;
    bool set (const int m, const int d, const int y);


private:
    int month;
    int day;
    int year;
    char format;
};

#endif //DATEASSIGNMENT_DATE_H
