#include "main.h"

/**
* print_line - prints a line of underscores followed by a newline
* @n: number of underscores to print
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
