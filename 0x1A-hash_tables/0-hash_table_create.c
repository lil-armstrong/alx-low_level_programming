#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table (SUCCESS) NULL (FAIL)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t) * size);
	/* int i = 0; */

	if (ht != NULL)
	{
		ht->size = size;
		ht->array = malloc(sizeof(hash_node_t *) * size);
		if (ht->array != NULL)
		{
			/* for (i = 0; i < size; i++)
				ht->array[i] = NULL; */
			return (ht);
		}
	}
	return (NULL);
}
