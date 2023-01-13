#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list
 * @h: head of list
 * Return: number of nodes (int)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nnodes = 0;
	const dlistint_t *current;

	if (h != NULL)
	{
		if (h->prev == NULL)
		{
			current = h;
			/* clang-format off */
			do {
				printf("%d\n", current->n);
				++nnodes;
				current = current->next;
			} while (current != NULL);
		}
	}
	return (nnodes);
}
