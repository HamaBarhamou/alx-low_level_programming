/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 1-list_len.c                               /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "lists.h"

/**
 * list_len - a function ...
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int cpt = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		cpt++;
		ptr = ptr->next;
	}
	return (cpt);
}

