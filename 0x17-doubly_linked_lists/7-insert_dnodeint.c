#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at index position
 * @h: list h
 * @index: index position to insert node at
 * @n: integer value of node
 * Return: inserted node (succes), NULL (fail)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int index, int n)
{
	unsigned int len = 0;
	dlistint_t *current, *node = NULL;

	if (*h != NULL)
	{
		while ((*h)->prev != NULL)
			*h = (*h)->prev;

		current = *h;
		while ((current) != NULL)
		{
			if (len == index)
			{
				node = malloc(sizeof(dlistint_t));
				if (node != NULL)
				{
					node->n = n;
					node->prev = current->prev;
					node->next = current;
					if (current->prev)
						current->prev->next = node;
					else
						*h = node;
					current->prev = node;
				}
				return (node);
			}
			current = current->next;
			++len;
		}

		if (len++ == index)
			return (add_dnodeint_end(h, n));
	}
	else if (index == 0)
	{
		node = add_dnodeint(h, n);
	}
	return (node);
}
