#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at specified index
 * @head: pointer to the head of the list
 * @indx: index of the node to be deleted
 *
 * Return: on success - 1, on failure - (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int indx)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (indx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < indx - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
