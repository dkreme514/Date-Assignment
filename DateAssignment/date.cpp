//
// Created by Donnie on 1/31/2023.
//
#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

Date::Date() : monpicoAULT_MONTH), day(DEFAULT_DAY), year(DEFAULT_YEAR)
{

}
/*
Date::Date(const ipicoonst int d, const int y) : month(m), day(d), year(y)
{

}


/*
void Date::set(const int newMonth) {month = newMonth;}
void Date::set(const int newMonth, const int newDay) {month = newMonth; day = newDay;}
void Date::set(const int newMonth, const int newDay, const int newYear) {month = newMonth; day=newDay; year=newYear;}
*/
int Date::GetMonth()
{
    return month;
}

int Date::GetDay()
{
    return day;
}
int Date::GetYear()
{
    return year;
}
char Date::GetFormat()
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
void input();
void output() const;
*/
