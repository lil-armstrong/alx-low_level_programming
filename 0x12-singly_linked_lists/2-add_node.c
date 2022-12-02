#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of the head of the list
 * @str: string
 * Return: Pointer (success), NULL (fail)
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	node = malloc(sizeof(list_t));
	temp = *head;

	if (node != NULL)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = temp;
		*head = node;

		return (*head);
	}
	return (NULL);
}
