#include "hash_tables.h"

/**
 * hash_table_create - creat the hash table
 * @size: the number
 *
 * Return: the hash table pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	hash_node_t *tab;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	tab = malloc(sizeof(hash_node_t *) * size);
	hash->array = &tab;
	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array = NULL;
	return (hash);
}
