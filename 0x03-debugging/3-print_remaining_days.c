#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 *
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
    /* Check if the year is a leap year */
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        /* If the month is after February, increment the day to account for the leap day */
        if (month > 2)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        /* Check if the date is invalid (February 29 in a non-leap year) */
        if (month == 2 && day == 29)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
            return;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);
    }
}
