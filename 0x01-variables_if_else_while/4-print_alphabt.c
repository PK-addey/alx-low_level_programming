#include <stdio.h>

/**
* main - Entry point, print alphabet in lowercase except 'q' and 'e'
*
* Return
*/

int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
