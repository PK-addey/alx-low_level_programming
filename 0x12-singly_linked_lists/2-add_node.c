#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: A pointer to the head of the list.
* @str: The string to be duplicated and stored in the new node.
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;


new_node = malloc(sizeof(list_t));
if (new_node == NULL)
exit(98);

new_node->str = strdup(str);
if (new_node->str == NULL)
exit(98);

new_node->len = 0;
while (str[new_node->len] != '\0')
new_node->len++;

new_node->next = *head;
*head = new_node;

return (new_node);
}
