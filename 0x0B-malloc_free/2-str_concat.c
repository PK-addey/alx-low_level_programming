#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings into a newly allocated memory space
* @s1: The first string
* @s2: The second string
*
* Return: Pointer to the concatenated string, or
* NULL if memory allocation fails
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int i, j, length1, length2;

/* Treat NULL as empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of the input strings */
for (length1 = 0; s1[length1] != '\0'; length1++)
;
for (length2 = 0; s2[length2] != '\0'; length2++)
;

/* Allocate memory for the concatenated string */
concat_str = malloc((length1 + length2 + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);

/* Copy the contents of s1 into concat_str */
for (i = 0; i < length1; i++)
concat_str[i] = s1[i];

/* Copy the contents of s2 into concat_str */
for (j = 0; j < length2; j++)
concat_str[i + j] = s2[j];

/* Null-terminate the concatenated string */
concat_str[i + j] = '\0';

return (concat_str);
}

