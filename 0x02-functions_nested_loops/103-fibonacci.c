#include <stdio.h>

/**
* main - Computes and prints the sum of the even-valued terms
* in the Fibonacci sequence whose values do not exceed 4,000,000
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1, b = 2, next, sum = 2;

while (b <= 4000000)
{
next = a + b;
a = b;
b = next;

if (b % 2 == 0)
{
sum += b;
}
}

printf("%lu\n", sum);

return (0);
}
