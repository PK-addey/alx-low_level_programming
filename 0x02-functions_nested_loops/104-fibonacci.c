#include <stdio.h>

/**
* main - Finds and prints the first 98 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long a = 1, b = 2;
unsigned long a_head, a_tail, b_head, b_tail;
unsigned long split = 1000000000;
int count;

unsigned long next_head;
unsigned long next_tail;

printf("%lu, %lu", a, b);

for (count = 2; count < 98; count++)
{
if (b > split / 10)
{
a_head = a / split;
a_tail = a % split;
b_head = b / split;
b_tail = b % split;

next_head = a_head + b_head + ((a_tail + b_tail) / split);
next_tail = (a_tail + b_tail) % split;
printf(", %lu%09lu", next_head, next_tail);

a_head = b_head;
a_tail = b_tail;
b_head = next_head;
b_tail = next_tail;
}
else
{
unsigned long next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
}

printf("\n");
return (0);
}
