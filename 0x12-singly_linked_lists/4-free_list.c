#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	if (head != NULL)
	{
		current = head;
		next = head->next;

		while (next != NULL)
		{
			/* printf("Freed: (%s, %d)\n", current->str, current->len); */
			free(current->str);
			free(current);
			current = next;
			/* printf("Next: (%s)\n", next->str); */
			next = next->next;
		}
		free(current->str);
		free(current);
	}
}
