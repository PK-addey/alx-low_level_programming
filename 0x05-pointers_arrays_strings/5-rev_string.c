#include "main.h"

/**
* rev_string - Reverses a string
* @s: Pointer to the string
*/
void rev_string(char *s)
{
int length = 0;
int start, end;
char temp;

/* Find the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Initialize start and end pointers */
start = 0;
end = length - 1;

/* Swap characters from start to end */
while (start < end)
{
/* Swap characters */
temp = s[start];
s[start] = s[end];
s[end] = temp;

/* Move pointers */
start++;
end--;
}
}
