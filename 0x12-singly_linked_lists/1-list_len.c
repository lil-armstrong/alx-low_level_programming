#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	const list_t *pt;
	unsigned int len;

	len = 0;
	pt = h;

	while (pt != NULL)
	{
		len++;
		pt = pt->next;
	}
	return (len);
}
