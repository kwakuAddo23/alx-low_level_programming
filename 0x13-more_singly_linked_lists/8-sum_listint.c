#include "lists.h"

/**
 * sum_listint - evaluated the sum of all elements in the listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: sum of al nodes, otherwise if empty - 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
