#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function returns the node of a listint_t linked list
 * @head: points to first node in the list
 * @index: points to index of the node
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *temp = head;

	while (temp && l < index)
	{
		temp = temp->next;
		l++;
	}

	return (NULL);
}
