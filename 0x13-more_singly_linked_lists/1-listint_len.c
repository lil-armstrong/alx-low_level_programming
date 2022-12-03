#include "lists.h"

/**
 * listint_len - he beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *pt;
	size_t len;

	len = 0;
	pt = h;

	while (pt != NULL)
	{
		len++;
		pt = pt->next;
	}
	return (len);
}
