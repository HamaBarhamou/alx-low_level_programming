#include "main.h"
#include <stdlib.h>

/**
 * print_line - a function print a number.
 * @n : the number
 *
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
