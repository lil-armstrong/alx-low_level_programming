#include "hash_tables.h"

/**
 * key_index - Get the index of a key
 * @key: Key to get index of
 * @size: Size of the array of the hash table
 * Return: Index of the specified key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
