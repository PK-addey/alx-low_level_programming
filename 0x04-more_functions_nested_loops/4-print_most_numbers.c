#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4,
* followed by a new line
*/
void print_most_numbers(void)
{
char digit;

digit = '0';
while (digit <= '9')
{
if (digit != '2' && digit != '4')
{
_putchar(digit);
}
digit++;
}
_putchar('\n');
}
