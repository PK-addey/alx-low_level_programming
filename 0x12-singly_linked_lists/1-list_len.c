#include <stdlib.h>
#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @h: A pointer to the head of the list.
* Return: The number of elements in the list.
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
const list_t *current = h;

while (current != NULL)
{
len++;
current = current->next;
}

return (len);
}
