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
    int days_in_year;

    /* Check if the date is invalid (February 29 in a non-leap year) */
    if (month == 2 && day == 29 && (!(year % 4 == 0 || year % 400 == 0) || year % 100 == 0))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    days_in_year = convert_day(month, day);

    /* Check if the year is a leap year */
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        printf("Day of the year: %d\n", days_in_year);
        printf("Remaining days: %d\n", 366 - days_in_year);
    }
    else
    {
        printf("Day of the year: %d\n", days_in_year);
        printf("Remaining days: %d\n", 365 - days_in_year);
    }
}
