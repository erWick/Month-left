/*
Erik Hall 101115254
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int month, day, left;
    cout << "Enter the date (DD MM)";
    cin >> day >> month;

    switch (month)
    {
        case 1: cout << (day <= 31 ? "" : "Invalid date"); 
            break;
            
        case 2: cout << (day <= 28 ? "" : "Invalid date");
                day = day + 31;
            break;
            
        case 3: cout << (day <= 31 ? "" : "Invalid date");
                day = day + 59;
            break;
            
        case 4: cout << (day <= 30 ? "" : "Invalid date");
                day = day + 90;
            break;
            
        case 5: cout << (day <= 31 ? "" : "Invalid date");
                day = day + 120;
            break;
            
        case 6: cout << (day <= 30 ? "" : "Invalid date");
                day = day + 151;
            break;
            
        case 7: cout << (day <= 31 ? "" : "Invalid date");
                day = day + 181;
            break;
            
        case 8: cout << (day <= 31 ? "" : "Invalid date");
                day = day + 212;
            break;
            
        case 9: cout << (day <= 30 ? "" : "Invalid date");
                day = day + 243;
            break;
            
        case 10: cout << (day <= 31 ? "" : "Invalid date");
                 day = day + 273;
            break;
            
        case 11: cout << (day <= 30 ? "" : "Invalid date");
                 day = day + 304;
            break;
            
        case 12: cout << (day <= 31 ? "" : "Invalid date");
                 day = day + 334;
            break;
    }
    left = 365 - day;
    cout << left << " day(s)";
    
    return 0;
}