#include "main.h"
#include <stdlib.h>

/**
 * print_number - a function print a number.
 * @n : the number
 *
 */


void print_number(int n)
{
	int r;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if(n > 0)
	{
		print_number(n / 10);
		r = n % 10;
		_putchar(r + '0');
	}
	
}
