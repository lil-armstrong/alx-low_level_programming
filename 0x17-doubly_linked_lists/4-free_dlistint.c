#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t linked list
 * @head: list head
 */
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
		head = NULL;
	}
}
