#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - checks if a singly linked list. has a cycle.
 * @n: integer
 * @next: points to the next node.
 *
 * Description: singly linked list node structure
 * for Holberton proj.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);

#endif
