#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: Pointer to the string to search
* @accept: Pointer to the string containing characters to match
*
* Return: Number of bytes in the initial segment of s which consist
*         only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int found;
char *a;

while (*s != '\0')
{
found = 0;
a = accept;
while (*a != '\0')
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}
if (!found)
break;
len++;
s++;
}

return (len);
}
