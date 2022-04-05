/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-memset.c                                   /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include<stdlib.h>
#include<stdio.h>

/**
 * ft_strlen - a function
 * @str: the chaine
 *
 * Return: 1 or 0
 */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}


/**
 * argstostr - a function ...
 * @ac: the number
 * @av: the list of arguments
 *
 * Return: 1 or 0
 */

char *argstostr(int ac, char **av)
{
	int i = 0, taille = 0, k = 0, j = 0;
	char *str, *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		taille = taille + ft_strlen(av[i]);
	}

	str = malloc((taille + ac + 1) * sizeof(char));

	for (i = 1; i < ac; i++)
	{
		p = av[i];
		while (p[k])
		{
			str[j] = p[k];
			k++;
			j++;
		}
		str[j] = '\n';
		j++;
		k = 0;
	}
	return (str);
}

