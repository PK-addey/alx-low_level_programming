#include "main.h"

/**
* _strncat - Concatenates two strings
* @dest: The destination string
* @src: The source string
* @n: The number of bytes to use from src
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

/* Find the length of dest string */
for (i = 0; dest[i] != '\0'; i++)
;

/* Concatenate src to dest using at most n bytes from src */
for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}

/* Null-terminate dest */
dest[i] = '\0';

return(dest);
}
