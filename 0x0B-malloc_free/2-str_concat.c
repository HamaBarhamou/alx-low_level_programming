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

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;
	src = malloc((len1 + len2 + 1) * sizeof(char));
	if (src != NULL)
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

