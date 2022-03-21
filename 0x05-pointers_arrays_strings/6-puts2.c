#include "main.h"

/**
 * puts2 - a function that takes a pointer to an int as parameter and
 * @str: chaine of caractere
 *
 * Return: 1 or 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
