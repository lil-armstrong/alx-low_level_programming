#include "lists.h"

/**
 * sum_dlistint - Return the sum of all n in a dlistint_t list
 * @head: list head
 * Return: sum of n in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
