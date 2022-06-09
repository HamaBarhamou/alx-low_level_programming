#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -  a function
 * @head: the head of list
 * @n: the number of noeud
 *
 * Return: number element of the link list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	/*(*head)->prev = new;*/
	*head = new;
	return (new);
}

