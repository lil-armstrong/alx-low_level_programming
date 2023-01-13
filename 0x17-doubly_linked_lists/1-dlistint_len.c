#include "lists.h"

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
		if (h->prev == NULL)
		{
			current = h;

			/* clang-format off */
			do {
				++len;
				current = current->next;
			} while(current != NULL);
		}
	}
	return (len);
}
