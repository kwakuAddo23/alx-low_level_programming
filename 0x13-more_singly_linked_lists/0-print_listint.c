#include "lists.h"

/**
 * print_listint - prints all the elements of the linked  list_int list
 * @h: head of the list_int list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		i++;
	}
	return (i);
}
