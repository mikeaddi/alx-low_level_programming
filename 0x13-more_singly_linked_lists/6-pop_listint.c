#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function deletes the head node of a listint_t linked list
 * @head: point to the head of the node in the linkd list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
