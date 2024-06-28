#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    if (leap && month >= 2) {
        day++;
    }

    switch (month) {
        case 1:
            break;
        case 2:
            day += 31;
            break;
        case 3:
            day += leap ? 60 : 59;
            break;
        case 4:
            day += leap ? 91 : 90;
            break;
        case 5:
            day += leap ? 121 : 120;
            break;
        case 6:
            day += leap ? 152 : 151;
            break;
        case 7:
            day += leap ? 182 : 181;
            break;
        case 8:
            day += leap ? 213 : 212;
            break;
        case 9:
            day += leap ? 244 : 243;
            break;
        case 10:
            day += leap ? 274 : 273;
            break;
        case 11:
            day += leap ? 305 : 304;
            break;
        case 12:
            day += leap ? 335 : 334;
            break;
        default:
            break;
    }

    if (leap && month == 2 && day > 60) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
    } else {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", leap ? 366 - day : 365 - day);
    }
}
