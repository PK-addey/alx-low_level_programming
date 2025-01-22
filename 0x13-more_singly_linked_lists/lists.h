#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Prototype for _putchar */
int _putchar(char c);

/* Data structure for singly linked list */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototypes for linked list operations */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
