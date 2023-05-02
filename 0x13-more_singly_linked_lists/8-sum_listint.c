#include "lists.h"
#include <stdio.h>

/**
 * sum_listint -  function returns the sum of all the data of a linked list
 * @head: point to the first node in the link
 *
 * Return: if the list is empty, return 0
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
