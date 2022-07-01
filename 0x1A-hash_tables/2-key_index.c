#include "hash_tables.h"

/**
 * key_index - index hash
 * @key: the char
 * @size: the int
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key)  % size;
	return (index);
}
