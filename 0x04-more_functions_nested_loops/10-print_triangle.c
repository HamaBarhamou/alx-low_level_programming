#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - a function print a number.
 * @size : the number
 *
 */

void print_triangle(int size)
{
	int i = 0, j = 0, n = size;


	if (size  <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if(j >= n)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
		n--;
	}
}
