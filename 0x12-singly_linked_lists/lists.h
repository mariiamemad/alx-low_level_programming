#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define structure for a singly linked list node */
typedef struct list_s
{
    char *str;            /* String data */
    size_t len;           /* Length of the string */
    struct list_s *next;  /* Pointer to the next node in the list */
} list_t;

/* Function prototype for printing all elements of a linked list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */
