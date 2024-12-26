#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - Concatenates two strings.
*
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int length1, length2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

length1 = strlen(s1);
length2 = strlen(s2);

concat = malloc((length1 + length2 + 1) * sizeof(char));
if (concat == NULL)
return (NULL);

strcpy(concat, s1);
strcat(concat, s2);

return (concat);
}
