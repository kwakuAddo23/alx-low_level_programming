#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: point to the head of the node of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

