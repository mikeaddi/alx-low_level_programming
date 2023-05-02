#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: point to the first node to be freed
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
