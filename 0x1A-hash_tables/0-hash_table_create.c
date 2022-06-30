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
	hash_node_t *array;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	array = malloc(sizeof(hash_node_t));
	hash->array = &array;
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	return (hash);
}
