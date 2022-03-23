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
 * cap_string - a function ...
 * @str: the chaine of caractere
 *
 * Return: str
 */

char	*cap_string(char *str)
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

