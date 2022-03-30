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

/**
* _strlen_recursion - function
*
* @s: the chaine
* Return: Always 0.
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* palidrone - function
*
* @s: chaine of the char
* @taille: the number
* @i: the number
* Return: Always 0.
*/
int palidrone(char *s, int taille, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[taille - i])
			return (0);
		else
			return (palidrone(s, taille, i + 1));
	}
	else
		return (1);
}

/**
* is_palindrome - function
*
* @s: the chaine of char
* Return: Always 0.
*/

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}

