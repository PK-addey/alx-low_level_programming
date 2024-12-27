#include "main.h"
#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in
* memory containing a copy of the string given as a parameter.
* @str: The string to duplicate
*
* Return: Pointer to the duplicated string, or NULL if str is
* NULL or if memory allocation fails.
*/
char *_strdup(char *str)
{
char *dup_str;
unsigned int i, length;

if (str == NULL)
return (NULL);

/* Calculate the length of the string */
for (length = 0; str[length] != '\0'; length++)
;

/* Allocate memory for the duplicate string */
dup_str = malloc((length + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);

/* Copy the string into the newly allocated memory */
for (i = 0; i < length; i++)
dup_str[i] = str[i];
dup_str[length] = '\0';

return (dup_str);
}

