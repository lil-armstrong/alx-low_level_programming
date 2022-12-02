
#include "lists.h"

/**
 * print_list - Prints all elements of list_h
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int nnodes;
	const list_t *pt;

	nnodes = 0;
	if (h != NULL)
	{
		pt = h;
		while (pt != NULL)
		{
			if (pt->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", pt->len, pt->str);
			}
			nnodes++;
			pt = pt->next;
		}
	}
	return (nnodes);
}
