/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 9-insert_nodeint.c                           /  _  \ |    |    \   \/  /  */
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
 * insert_nodeint_at_index - a function ...
 * @head: the list
 * @n: the chaine
 * @idx: the number
 *
 * Return: 1 or 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head, *save;
	unsigned int cpt = 0;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL || idx == 0)
	{
		*head = new;
		return (*head);
	}

	while (cpt != idx - 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		cpt++;
	}

	if (ptr->next == NULL)
		ptr->next = new;
	else
	{
		save = ptr->next;
		ptr->next = new;
		new->next = save;
	}
	return (new);
}

