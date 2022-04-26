/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 7-get_nodeint.c                              /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 * @index: the number
 *
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *ptr = head;

	while (num != index && ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
