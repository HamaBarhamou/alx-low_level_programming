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

#include <string.h>

/**
 * compare - a function ...
 * @X: the chaine
 * @Y: the chaine
 *
 * Return: 1 or 0
 */

int	compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

/**
 * _strstr - a function ...
 * @haystack: the chaine
 * @needle: the chaine
 *
 * Return: 1 or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int	i;

	i = 0;
	if (haystack[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

