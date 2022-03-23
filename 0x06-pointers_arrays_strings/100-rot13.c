#include<stdio.h>

/**
 * remplace13 - a function ...
 * @alpha: the chaine of caractere
 * @code: the chaine of caractere
 * @c: char
 *
 * Return: char
 */

char remplace13(char *alpha, char *code, char c)
{
	int i = 0;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		while (alpha[i] != c)
			i++;
		return (code[i]);
	}
	else
		return (c);
}

/**
 * rot13 - a function ...
 * @str: the chaine of caractere
 *
 * Return: str
 */

char	*rot13(char *str)
{
	int i = 0;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cde[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		str[i] = remplace13(alp, cde, str[i]);
		i++;
	}
	return (str);
}

