#include "main.h"
#include <unistd.h>

/**
* _strlen - Returns the length of a string
* @s: Pointer to the string
* Return: Length of the string
*/
int _strlen(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

 return (length);
}

/**
* puts_half - Prints half of a string followed by a new line
* @str: Pointer to the string
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start_index;

/* Calculate the start index for printing */
if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length + 1) / 2;
}

/* Print the second half of the string */
while (str[start_index] != '\0')
{
write(1, &str[start_index], 1);
start_index++;
}

/* Print new line */
write(1, "\n", 1);
}
