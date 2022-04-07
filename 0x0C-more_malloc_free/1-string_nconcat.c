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
#include "main.h"

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
 * string_nconcat - a function ...
 * @s1: the chaine
 * @s2: the chaine
 * @n: the number
 *
 * Return: 1 or 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int arret, i = 0, j = 0;
	unsigned int taille;
	char *str;

	str  = malloc(sizeof(char) * (ft_strlen(s1) + n + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[j] = s1[i];
		i++;
		j++;
	}

	if (s2 == NULL)
	{
		return (s1);
	}

	i = 0;
	taille = ft_strlen(s2);

	if (taille >= n)
		arret =  n;
	else
		arret = taille;
	while (i <= arret)
	{
		str[j] =  s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

