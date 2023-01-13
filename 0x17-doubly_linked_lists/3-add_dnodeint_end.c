#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list.
 * @head: list head
 * @n: new node integer value
 * Return: address of new node (success), NULL (fail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *current;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	current = *head;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}
	else
		*head = node;
	node->prev = current;

	return (node);
}
