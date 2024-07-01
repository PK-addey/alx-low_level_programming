#include "main.h"
#include <unistd.h>

/**
* puts2 - Prints every other character of a string
* starting with the first character, followed by a new line.
* @str: Pointer to the string
*/
void puts2(char *str)
{
int i = 0;

/* Iterate through the string */
while (str[i] != '\0')
{
/* Print character at even indices */
if (i % 2 == 0)
{
write(1, &str[i], 1);
}
i++;
}
/* Print new line */
write(1, "\n", 1);
}
