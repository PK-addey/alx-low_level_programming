#include <stdio.h>

/**
* main - Finds and prints the first 98 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)

{
int a = 1;
int b = 2;
int i;
int next;
printf("%d, %d", a, b);
for (i = 3; i <= 98; i++)
{
next = a + b;
printf(", %d", next);
a = b;
b = next;
}
printf("\n");
return (0);
}
