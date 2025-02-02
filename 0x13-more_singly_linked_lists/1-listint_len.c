#include "lists.h"

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: the head of the list
*
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;

while (current != NULL)
{
count++;
current = current->next;
}

return (count);
}
