#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all the elements of a listint_t list
* @h: the head of the list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}

return (count);
}
