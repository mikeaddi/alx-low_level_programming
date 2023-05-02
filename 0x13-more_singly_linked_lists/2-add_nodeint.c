#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: points to first node in the list
 * @n: points to the new node in the list
 *
 * Return: to the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
