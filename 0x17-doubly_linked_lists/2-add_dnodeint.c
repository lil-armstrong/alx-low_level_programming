#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: list head
 * @n: number to add
 * Return: address of new element (success), NULL (fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL, *current;

	if (head != NULL)
	{
		current = *head;
		if (current->prev == NULL)
		{
			/* Create a new node */
			node = malloc(sizeof(dlistint_t));

			if (node != NULL)
			{
				/* Set prev to null */
				node->prev = NULL;
				/* Set next to point to current head */
				node->next = current;
				/* Point the current head prev to the new node */
				*head = node;
			}
		}
	}

	return (node);
}
