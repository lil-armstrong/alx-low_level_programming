#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *current;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	current = *head;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	node->next = current;

	if (current != NULL)
		current->prev = node;

	*head = node;

	return (node);
}
