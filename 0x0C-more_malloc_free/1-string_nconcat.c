#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - Concatenates two strings
* @s1: The first string
* @s2: The second string
* @n: The maximum number of bytes of s2 to concatenate
*
* Return: Pointer to the newly allocated memory containing s1 followed by
*         the first n bytes of s2, null-terminated, or NULL if it fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i, j;

/* Treat NULL strings as empty */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the lengths of s1 and s2 */
while (s1[len1])
len1++;
while (s2[len2])
len2++;

/* Use the entire s2 if n is greater than or equal to its length */
if (n >= len2)
n = len2;

/* Allocate memory for the concatenated string */
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

/* Copy s1 into the new memory */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* Copy the first n bytes of s2 into the new memory */
for (j = 0; j < n; j++)
concat[i + j] = s2[j];

/* Null-terminate the new string */
concat[i + j] = '\0';

return (concat);
}
