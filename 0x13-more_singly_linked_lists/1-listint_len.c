#include "lists.h"

/**
 * listint_len - returns the number of elemnts in a linked list
 * @h: pointer to the first node in the list
 *
 * Return: number of element in list
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
