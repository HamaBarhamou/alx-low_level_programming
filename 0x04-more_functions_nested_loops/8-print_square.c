#include "main.h"
#include <stdlib.h>

/**
 * print_square - a function print a number.
 * @size : the number
 *
 */

void print_square(int size)
{
	int i = 0, j = 0;


	if (size  <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
