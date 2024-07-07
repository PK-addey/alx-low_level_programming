#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0
* Return: empty output
*/

void times_table(void)
{
int i, j;
int result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
result = i * j;
if (result < 10)
_putchar(' ');
else
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
