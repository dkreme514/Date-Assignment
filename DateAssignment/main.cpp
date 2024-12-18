// Main Dirver given by Professor. Tasks are to create a date.cpp and a
// 	date.h to run this driver.
// Author of date.cpp and date.h: Donald Kremer


#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

// *******************************************************************************
// * Name: main *
// * Class: COP3330 *
// * Description: Test driver for the Date class, Assignment #2, COP3330. *
// * Tests to see if all of the methods have been declared in *
// * accordance with the specifications AND if the files have *
// * named properly. NOTE: This drive does not do a complete. *
// * test of your class. You should modify it to perform more *
// *. extensive testing. *
// * Author: Dr. David A. Gaitros *
// * Date: September 12, 2019 *
// * Copyright: This file is for use by students at Florida State University *
// * for the COP3330 course. *
// *******************************************************************************

int main(void)
{ bool status=false;
    int comparestatus=0;

    Date date1; // Test Default constructor
//    Date date2(2,29,2000); // Test 3 param constructor with valid date
 /*   Date date3(15,15,1500); // Test 3 param constructor with invalid date
    status=date3.Set(2,18,1955); // Test Set method
    status=date2.SetFormat('T'); // Test SetFormat method
    date2.Show(); // Test Show method
    date2.Input(); // Test the Input method
// *******************************************************************************
// * Test the GetMonth, GetDay, GetYear methods *
// *******************************************************************************

    cout << date2.GetMonth()<<'/'<<date2.GetDay()<<'/'<<date2.GetYear()<<endl;
    date1.Increment(); // Test Increment with no parameters
    date1.Increment(); // Test Increment with one parameter
    comparestatus=date1.Compare(date2); // Test Compare method
    return 0;
}



/*

Grading Criteria:
(25 Points) The program compiles and executes without exception and produces output.  The grading of the output cannot be accomplished unless the program executes.   25 points will be deducted if the grader must make minor modifications to your program in order for it to work on the linprog g++ compiler.
(5 points) date.h compiles with g++ -c –std=c++11 date.h. All lowercase letters
(5 points) date.cpp compiles with g++ -c –std=c++11 date.cpp. All lowercase letters
(5 points) makefile works with the instructors main.cpp with no modification. Any modifications remove 5 points.
(50 Points) The program produces the correct output.
(5 Points) Proper messages for input.
(5 Points) Long Format
        (5 Points) Default Format
        (5 Points) Two Digit format tested with leading and all zeros
        (5 Points) Julian date Format
(5 Points) Increment works with default of 1 or 365 (next year)
(5 Points) Compare works properly and returns valid results
        (5 Points) Program only allows valid dates and takes into account leap year with Set
        (5 Points) GetMonth, GetDay, GetYear all work properly
        (5 Points) Two constructors exist in accordance with the specifications
        (10 Points)The program is documented (commented)
(5 Points)Use constants when values are not to be changed
(5 Points)Use proper indentation
(5 Points)Use good naming standards
 */
//
// *******************************************************************************
// *******************************************************************************
// * Name:  main                                                                 *
// * Class: COP3330                                                              *
// * Description:  Test driver for the Date class, Assignment #2, COP3330.       *
// *               Tests to see if all of the methods have been declared in      *
// *               accordance with the specifications AND if the files have      *
// *               named properly.                                               *
// * Author: Dr. David A. Gaitros                                                *
// * Date: September 12, 2019                                                    *
// * Copyright:  This file is for use by students at Florida State University    *
// *               for the COP3330 course.                                       *
// *******************************************************************************
/*
void PrintDates( Date & d)
{
    d.SetFormat('D');
    cout<<"Default Format: ";
    d.Show();
    d.SetFormat('L');
    cout <<"Long Format:   ";
    d.Show();
    d.SetFormat('T');
    cout <<"Two Digit:     ";
    d.Show();
    d.SetFormat('J');
    cout <<"Julian Format: ";
    d.Show();
}

int main(void)
{

    cout << "hello world"<< endl;
    Date date1;
    cout<< date1.GetMonth()<<endl;
    cout<< date1.GetDay()<<endl;
    cout<< date1.GetYear()<<endl;

    //    bool status=false;
    //int  comparestatus=0;
  //  Date date1; 			// Test Default constructor


    PrintDates(date1);
    Date date2(2,29,2000);		// Test 3 param with valid date
    cout <<"Test 3 parameter Constructor with valid date"<< endl;
    PrintDates(date2);
    Date date3(15,15,1500);		// Test 3 param with invalid date
    cout<<"Test 3 parameter Constructor with invalid date"<<endl;
    PrintDates(date3);
    cout <<"Set with a valid date of 2-18-1955):";
    status=date3.Set(2,18,1955);	// Test Set method
    PrintDates(date3);
    cout <<"Set with an invalid date of 60-60-1500:";
    PrintDates(date3);
// *******************************************************************************
// * Test input, three values. Valid, valid with  leap, invalid                  *
// *******************************************************************************
    date2.Input();			// Test the Input method
    PrintDates(date2);
    date2.Input();
    PrintDates(date2);
    date2.Input();
    PrintDates(date2);
// *******************************************************************************
// * Test the GetMonth, GetDay, GetYear methods                                  *
// *******************************************************************************
    cout <<"Test GetMonth(), GetDay() and GetYear(): ";
    cout << date2.GetMonth()<<'/'<<date2.GetDay()<<'/'<<date2.GetYear()<<endl;
    cout <<"Test Increment() with default date: ";
    date1.Increment(); 		// Test Increment with no parameters
    PrintDates(date1);
    date1.Increment(365);		// Test Increment with one parameter
    cout << "Test Increment(365) to add a year: ";
    PrintDates(date1);
    cout<<"Compare, First date is 2-18-1955, second date is 2-18-2019, status is: ";
    date1.Set(2,18,1955); date2.Set(2,18,2019);
    comparestatus=date1.Compare(date2);  // Test Compare method
    cout<<comparestatus<< endl;
    cout<<"Compare, First date is 2-18-1955, second date is 2-18-1955, status is: ";
    date1.Set(2,18,1955); date2.Set(2,18,1955);
    comparestatus=date1.Compare(date2);  // Test Compare method
    cout<<comparestatus<< endl;
    cout<<"Compare, First date is 2-18-1955, second date is 2-18-1945, status is: ";
    date1.Set(2,18,1955); date2.Set(2,18,1945);
    comparestatus=date1.Compare(date2);  // Test Compare method
    cout<<comparestatus<< endl;
*/
    return 0;
}
