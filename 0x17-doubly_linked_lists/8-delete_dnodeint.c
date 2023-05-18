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
	dlistint_t *new, *temp;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(new);
		return (1);
	}
	while (new && i < index)
	{
		new = new->next;
		i++;
	}
	if (!new)
		return (-1);

	temp = new->prev;
	temp->next = new->next;

	if (new->next)
		(new->next)->prev = temp;

	free(new);
	return (1);
}
