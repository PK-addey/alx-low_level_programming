#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_t - A linked list node.
 * @str: The string stored in the node.
 * @len: The length of the string.
 * @next: A pointer to the next node in the list.
 */
typedef struct list_t
{
    char *str;
    unsigned int len;
    struct list_t *next;
} list_t;

void free_list(list_t *head);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);

#endif
