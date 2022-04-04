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

#include<stdlib.h>

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
* ft_strcpy - a functio
* @src: the chaine
*
* Return: 1 or 0
*/
char *ft_strcpy(char *src)
{
	char *str = malloc((ft_strlen(src) + 1) * sizeof(char));
	int i = 0;

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

/**
 * str_concat - a function ...
 * @s1: the chaine
 * @s2: the chaine
 *
 * Return: 1 or 0
 */

char  *str_concat(char *s1, char *s2)
{
	char *src;
	int len1 = 0, i = 0, len2 = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	src = malloc((len1 + len2 + 1) * sizeof(char));
	if (src == NULL)
		return (NULL);
	{
		while (s1[i])
		{
			src[i] = s1[i];
			i++;
		}

		while (s2[j])
		{
			src[i] = s2[j];
			i++;
			j++;
		}
		src[i] = '\0';
	}
	return (src);
}
