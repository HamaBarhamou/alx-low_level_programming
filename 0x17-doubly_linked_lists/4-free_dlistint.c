#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  a function
 * @head: the head of list
 *
 * Return: number element of the link list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *tmp;

	while (head->prev != NULL)
		head = head->prev;

	ptr = head;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}

