#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
* Return: The number of nodes.
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", current->len, current->str);
count++;
current = current->next;
}

return (count);
}
