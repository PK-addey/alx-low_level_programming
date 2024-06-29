#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point, assigns a random number to n and prints its last digit
*
*Return: Always 0 (Success)
*/

int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last_digit = n % 10; /* get the last digit of n */

printf("Last digit of n is ");

if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

return (0);
}
