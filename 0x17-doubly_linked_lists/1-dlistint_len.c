#include "lists.h"

/**
 * dlistint_len -  a function
 * @h: the head of list
 *
 * Return: number element of the link list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nb = 0;
	const dlistint_t *ptr;

	/*Recherche de la tete de liste*/
	while (h->prev != NULL)
		h = h->prev;
	ptr = h;
	while (ptr != NULL)
	{
		nb++;
		ptr = ptr->next;
	}

	return (nb);
}

