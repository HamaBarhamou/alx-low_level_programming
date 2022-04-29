#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - a function ....
 * @n: the chaine of caractere
 * @index: the number
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
