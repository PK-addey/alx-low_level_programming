#include <stdio.h>
#include "main.h"

int main(void)
{
int month;
int day;
int year;
int is_leap_year;

month = 4;
day = 1;
year = 1997;

is_leap_year = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day, is_leap_year);

print_remaining_days(month, day, year);

return (0);
}
