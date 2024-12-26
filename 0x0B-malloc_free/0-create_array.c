#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* create_array - Creates an array of chars and
* initializes it with a specific char.
*
* @size: The size of the array to be created.
* @c: The character to initialize the array with.
*
* Return: A pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

memset(array, c, size);
return (array);
}
