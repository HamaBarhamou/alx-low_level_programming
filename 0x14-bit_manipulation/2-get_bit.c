#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
 * get_bit - a function ....
 * @n: the chaine of caractere
 * @index: the number
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = ~(~0U >> 1);
	unsigned long int i = 0, k = 0;
	char t[32];

	while (mask > 0)
	{
		t[k] = (n & mask) ? '1' : '0';
		mask >>= 1;
		++i;
		++k;
	}
	t[k] = '\0';
	/*printf("avant: %s\n",t);*/
	rev_string(t);
	/*printf("apres: %s\n",t);*/
	return (t[index] - '0');
}
