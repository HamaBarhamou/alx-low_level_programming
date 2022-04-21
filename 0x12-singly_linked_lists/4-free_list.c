/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 4-free_list.c                                /  _  \ |    |    \   \/  /  */
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
 * free_list - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */

void free_list(list_t *head)
{
	list_t *ptr, *tmp;

	ptr = head;
	while (ptr != NULL)
	{
		tmp =  ptr;
		ptr = ptr->next;
		free(tmp->str);
		free(tmp);
	}
}

