#include <stdlib.h>
#include "main.h"

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements in the array
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory, or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total_size, i;

/* Check for invalid input */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate total memory size needed */
total_size = nmemb * size;

/* Allocate memory */
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

/* Initialize memory to zero */
for (i = 0; i < total_size; i++)
ptr[i] = 0;

return (ptr);
}

