#include <stdio.h>

/**
* main - Entry point, prints all single digits of base 10 starting from 0
*
* Return: Always 0 (Success)
*/

int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
putchar('\n');

return (0);
}
