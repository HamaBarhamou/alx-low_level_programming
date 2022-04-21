/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 2-add_node.c                               /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen_recursion - function
*
* @s: the chaine
* Return: Always 0.
*/

int _strlen_recursion(const char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node - a function ...
 * @head: the list
 * @str: the chaine
 *
 * Return: 1 or 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new =  malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen_recursion(str);
	new->next = *head;
	*head = new;

	return (new);
}

