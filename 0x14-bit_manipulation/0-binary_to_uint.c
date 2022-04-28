#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * rev_string - a function that reverse a string
 * @s: chaine of caractere
 *
 * Return: 1 or 0
 */

void rev_string(char *s)
{
	int i = 0, taille, k;
	char c;


	while (s[i] != '\0')
		i++;

	i--;
	taille = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[taille];
		s[taille] = c;
		i++;
		taille--;
	}
}

/**
 * puis - the function calcule the x puissance y
 * @x: the number
 * @y: the number
 *
 * Return: 1 or 0
 */

int puis(int x, int y)
{
	int n = 1, i;

	for (i = 0; i < y; i++)
		n = n * x;

	return (n);
}

/**
 * binary_to_uint - a function ....
 * @b: the chaine of caractere
 *
 * Return: 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0, i = 0, cpt = 0, test;
	char c;

	if (b == NULL)
		return (0);

	while (b[i])
		i++;
	i--;

	while (i >= 0)
	{
		test = (b[i] == '0' || b[i] == '1');
		if (!test)
		{
			/*printf("test=%d pour i=%d\n",test,i);*/
			return (0);
		}
		c = b[i];
		n = n + _atoi(&c) * puis(2, cpt);
		/*printf("b[%d]=%d\n",i,_atoi(&c));*/
		i--;
		cpt++;
	}
	return (n);
}
