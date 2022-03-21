#include "main.h"

/**
 * puts_half - a function that takes a pointer to an int as parameter and
 * @str: chaine of caractere
 *
 * Return: 1 or 0
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	i = i / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
