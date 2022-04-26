/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 6-pop_listint.c                              /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp, *t;
	int n;

	if (head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	t = *head;
	t = t->next;
	*head = t;
	free(tmp);
	return (n);
}

