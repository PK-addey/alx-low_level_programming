#include "main.h"
#include <unistd.h>

/**
* print_rev - Prints a string in reverse followed by a new line
* @s: Pointer to the string
*
* Return: nothing
*/
void print_rev(char *s)
{
int length = 0;

/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Print the string in reverse */
while (length > 0)
{
write(1, &s[length - 1], 1);
length--;
}

/* Print the new line */
write(1, "\n", 1);
}
