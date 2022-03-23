#include<stdio.h>

/**
 * upper - a function ...
 * @c: the caractere
 *
 * Return: 1 or 0.
 */

char	upper(char c)
{
	char	car;

	if (c >= 'a' && c <= 'z')
		car = c + 'A' - 'a';
	else
		car = c;
	return (car);
}

/**
 * string_toupper - a function ...
 * @str: the chaine of caractere
 *
 * Return: str
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}

