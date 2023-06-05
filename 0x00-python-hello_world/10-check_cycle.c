#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - It checks if a singly linked list has a cycle in it.
 * @list: the singly linked link
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *head;
	listint_t *tail;

	if (list == NULL)
		return (0);

	head = list;
	tail = list;

	while (tail != NUll && tail->next != NULL)
	{
		head = head->next;
		tail = tail->next->next;

		if (head == tail)
			return (1);
	}
	return (0);
}
