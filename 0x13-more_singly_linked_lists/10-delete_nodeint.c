#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t linked list
* @head: the head of the list
* @index: the index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *prev_node;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

prev_node = *head;
while (prev_node->next != NULL && i < index - 1)
{
prev_node = prev_node->next;
i++;
}

if (prev_node->next == NULL || i != index - 1)
return (-1);

temp = prev_node->next;
prev_node->next = prev_node->next->next;
free(temp);

return (1);
}
