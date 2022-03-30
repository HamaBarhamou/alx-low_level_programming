/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-puts_recursion.c                           /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-30 09:46:22   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-30 09:46:22 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include "main.h"
static int taille = 1;
/**
* _strlen_recursion - function
*
* @s: the chaine
* Return: Always 0.
*/

int _strlen_recursion(char *s)
{
	if (s[taille] != '\0')
	{
		taille++;
		_strlen_recursion(s);
	}
	return (taille);
}

