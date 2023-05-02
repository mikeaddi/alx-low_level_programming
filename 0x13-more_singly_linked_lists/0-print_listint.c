#include "lists.h"

/**
 * print_listint - unction that prints all the elements of a listint_t list
 * @h: pointer to head of listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
