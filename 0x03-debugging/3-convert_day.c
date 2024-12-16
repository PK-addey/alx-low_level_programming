#include "main.h"

/**
* convert_day - converts day of month to day of year, accounting for leap years
* @month: month in number format
* @day: day of month
* @is_leap_year: 1 if the year is a leap year, 0 otherwise
* Return: day of year
*/

int convert_day(int month, int day, int is_leap_year)
{
switch (month)
{
case 2:
day = 31 + day;
break;
case 3:
day = 59 + day + is_leap_year;
break;
case 4:
day = 90 + day + is_leap_year;
break;
case 5:
day = 120 + day + is_leap_year;
break;
case 6:
day = 151 + day + is_leap_year;
break;
case 7:
day = 181 + day + is_leap_year;
break;
case 8:
day = 212 + day + is_leap_year;
break;
case 9:
day = 243 + day + is_leap_year;
break;
case 10:
day = 273 + day + is_leap_year;
break;
case 11:
day = 304 + day + is_leap_year;
break;
case 12:
day = 334 + day + is_leap_year;
break;
default:
return -1;
}

return day;
}
