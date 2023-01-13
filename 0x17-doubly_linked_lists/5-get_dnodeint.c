#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list.
 * @head: list head
 * @index: index position value
 * Return: nth node (success), NULL(fail)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			if (len == index)
				break;
			head = head->next;
			++len;
		}
	}

	return (head);
}
