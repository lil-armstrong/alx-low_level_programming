#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head->next != NULL)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
