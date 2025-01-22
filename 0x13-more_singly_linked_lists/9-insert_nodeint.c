#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: the head of the list
* @idx: the index of the list where the new node should be added
* @n: the integer value for the new node
*
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *prev_node;
unsigned int i = 0;

if (idx != 0)
{
prev_node = *head;
while (prev_node != NULL && i < idx - 1)
{
prev_node = prev_node->next;
i++;
}

if (prev_node == NULL)
return (NULL);
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
new_node->next = prev_node->next;
prev_node->next = new_node;
}

return (new_node);
}
