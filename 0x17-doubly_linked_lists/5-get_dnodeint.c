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

	while (head->next != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	if (head->next == NULL)
	{
		i++;
		if (i == index)
		{
			return (head);
		}
	}
	if (index > i)
	{
		return (NULL);
	}
	return (NULL);
}
