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

#include <stddef.h>

/**
 * _strchr - a function ...
 * @s: the chaine
 * @c: the char
 *
 * Return: 1 or 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] && s[i] != c)
		i++;
	if (s[i])
		return (&s[i]);
	else
		return (NULL);
}

