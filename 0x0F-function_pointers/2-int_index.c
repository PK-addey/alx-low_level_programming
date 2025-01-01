#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array
* @array: The array to search
* @size: The number of elements in the array
* @cmp: A pointer to the function used to compare values
*
* Return: The index of the first match, or -1 if no match or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}