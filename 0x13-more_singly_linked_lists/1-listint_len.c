#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: head of the linked list
 *
 * Return: the number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

