#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index index of a dlistint_t
 * linked list.
 * @head: list head
 * @index: index position to delete from
 * Return: 1 (success), -1 (fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	current = *head;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;

		while (current != NULL)
		{
			if (!index)
			{
				if (current->prev == NULL)
				{
					if (current->next)
					{
						*head = current->next;
						(*head)->prev = NULL;
					}
					else
						*head = NULL;
				}
				else
				{
					if (current->next)
						current->next->prev = current->prev;
					current->prev->next = current->next;
				}

				if (current)
					free(current);
				return (1);
			}
			--index;
			current = current->next;
		}
	}
	return (-1);
}
