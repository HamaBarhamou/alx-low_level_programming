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

	if (h == NULL)
		return (0);

	if (h->prev != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		nb++;
		h = h->next;
	}

	return (nb);
}

