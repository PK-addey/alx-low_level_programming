#include "main.h"

/**
* _strcmp - Compares two strings s1 and s2.
* @s1: The first string to be compared.
* @s2: The second string to be compared.
*
* Return: Negative value if s1 is less than s2,
*         Positive value if s1 is greater than s2,
*         0 if s1 is equal to s2.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
