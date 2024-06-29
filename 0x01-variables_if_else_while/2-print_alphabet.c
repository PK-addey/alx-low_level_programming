#include <stdio.h>

/**
* main - Entry point, prints the alphabet in lowercase followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');

return (0);
}
