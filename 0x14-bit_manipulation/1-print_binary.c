#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_binary - a function ....
 * @n: the chaine of caractere
 *
 * Return: 1 or 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = ~(~0U >> 1);
	unsigned long int i = 0;

	while (mask > 0)
	{
		/**
		 *if (i != 0 && i % 4 == 0)
		 *	putchar(' ');
		 */

		putchar((n & mask) ? '1' : '0');
		mask >>= 1;
		++i;
	}

	putchar('\n');
}
