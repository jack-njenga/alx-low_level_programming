#include "lists.h"
/**
 * dlistint_len - return the number of nodes in a list
 * @h: head of the list
 *
 * Return number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t i = 0;

	while (curr)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}
