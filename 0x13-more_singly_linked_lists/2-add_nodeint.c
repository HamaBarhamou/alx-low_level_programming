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
 * add_nodeint - a function ...
 * @head: the list
 * @n: the chaine
 *
 * Return: 1 or 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

