/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 8-sum_listint.c                              /  _  \ |    |    \   \/  /  */
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
 * sum_listint - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
