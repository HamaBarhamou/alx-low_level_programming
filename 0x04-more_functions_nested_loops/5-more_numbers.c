#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - a function print a number.
 *
 */

void more_numbers(void)
{
	int i, k;

	for (k = 1; k <= 10; k++)
	{
		/* Execution du code print_most_number */

		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
				_putchar(i + '0');
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
		}
		system("echo \"\"");
	}
}
