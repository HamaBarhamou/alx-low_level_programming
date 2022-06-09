#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  a function
 * @h: the head of list
 *
 * Return: number element of the link list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb = 0;
	const dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d \n", ptr->n);
		nb++;
		ptr = ptr->next;
	}

	return (nb);
}

