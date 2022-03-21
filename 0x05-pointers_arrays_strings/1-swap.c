#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the integer adresse
 * @b: the integer adresse
 *
 * Return: 1 or 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
