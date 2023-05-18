#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	return (1);
}
