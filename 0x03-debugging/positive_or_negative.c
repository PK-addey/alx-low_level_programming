#include "main.h"

/**
* positive_or_negative - Checks if a number is positive or negative
* @i: The number to be checked
*
* This function prints whether the number stored in i is positive,
* negative, or zero.
*/
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
}
