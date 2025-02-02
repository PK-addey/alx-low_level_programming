#include <stdlib.h>
#include "main.h"

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc(old_size)
* @old_size: The size in bytes of the allocated space for ptr
* @new_size: The new size in bytes of the new memory block
*
* Return: Pointer to the newly allocated memory, or NULL if it fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

/* If new_size is 0 and ptr is not NULL, free ptr and return NULL */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* If ptr is NULL, allocate new memory */
if (ptr == NULL)
return (malloc(new_size));

/* If new_size is equal to old_size, return ptr */
if (new_size == old_size)
return (ptr);

/* Allocate memory for the new block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* Copy the contents of the old block to the new block */
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = ((char *)ptr)[i];

/* Free the old block */
free(ptr);

return (new_ptr);
}

