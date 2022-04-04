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
 * _strdup - a function ...
 * @str: the chaine
 *
 * Return: 1 or 0
 */

char  *_strdup(char *str)
{
	char *src;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	src = malloc((len + 1) * sizeof(char));
	if (src != NULL)
	{
		while (str[i])
		{
			src[i] = str[i];
			i++;
		}
		src[i] = '\0';
	}
	return (src);
}

