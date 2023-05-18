#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: nth node or if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *curr = head;

	if (curr == NULL)
		return (NULL);

	while (curr)
	{
		if (index == i)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
