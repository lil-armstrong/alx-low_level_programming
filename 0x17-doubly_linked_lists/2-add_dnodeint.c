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

	current = *head;
	node = malloc(sizeof(dlistint_t));
	if (node != NULL)
	{
		node->n = n;
		node->prev = NULL;
		node->next = NULL;
	}

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;

		node->next = current;
		current->prev = node;
	}
	*head = node;

	return (node);
}
