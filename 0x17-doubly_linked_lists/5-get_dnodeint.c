#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int cpt = 0;

	if (head == NULL)
		return (NULL);

	if (head->prev != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	ptr = head;
	while ((index != cpt) && (ptr != NULL))
	{
		cpt++;
		ptr = ptr->next;

	}

	return (ptr);

}
