#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: the head of the list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL || *head == NULL)
return;
while ((*head)->next != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
free(*head);
*head = NULL;
}
