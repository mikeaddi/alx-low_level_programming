#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * @head: points to the first node in the list
 * @index: index is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (-1);
	}

	while (l < index - 1)
	{
		if (temp || !(temp->next))
			return (-1);
		temp = temp->next;
		l++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
