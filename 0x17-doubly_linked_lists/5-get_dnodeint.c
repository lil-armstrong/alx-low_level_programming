#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: list head
 * @index: index position value
 * Return: nth node (success), NULL(fail)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	const unsigned int len = dlistint_len(head);

	if (index < len - 1)
	{
		node = head;

		while (index && node != NULL)
		{
			node = node->next;
			--index;
		}
	}

	return (node);
}

/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 * @h: list head
 * Return: int
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;
	const dlistint_t *current;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;

		current = h;
		while (current != NULL)
		{
			++len;
			current = current->next;
		}
	}
	return (len);
}
