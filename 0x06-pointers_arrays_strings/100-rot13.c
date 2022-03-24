#include<stdio.h>

/**
 * remplace13 - a function ...
 * @b: char
 *
 * Return: char
 */

char remplace13(char b)
{
	/*ASCII 65 is A and 90 is Z*/
	if ((b > 64) && (b < 91))
	{
		b = ((b - 65 + 13) % 26) + 65;
	}

	/*ASCII 97 is a and 122 is z*/
	if ((b > 96) && (b < 123))
	{
		b = ((b - 97 + 13) % 26) + 97;
	}

	return (b);
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
	/*char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";*/
	/*char cde[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";*/

	while (str[i])
	{
		str[i] = remplace13(str[i]);
		i++;
	}
	return (str);
}

