#include "main.h"
#include <stddef.h>

/**
* _strpbrk - Searches a string for any of a set of bytes
* @s: Pointer to the string to search
* @accept: Pointer to the string containing characters to search for
*
* Return: Pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
char *a;

while (*s != '\0')
{
a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}

return (NULL);
}
