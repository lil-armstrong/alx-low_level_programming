#include "lists.h"

/**
 * add_node_end - Add node to end of list
 * @head: head of list
 * @str: list string
 * Return: node (success), NULL (fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *node;

	node = malloc(sizeof(list_t));
	temp = *head;

	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;

		if (temp != NULL)
		{
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = node;
		}
		else
			*head = node;
		return (node);
	}
	return (NULL);
}
