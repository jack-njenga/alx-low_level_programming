#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the pointer of the linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *next;

	if (*head ==  NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	next = *head;
	while (i < (index - 1) && next != NULL)
	{
		next = next->next;
		i++;
	}
	if (next == NULL || next->next == NULL)
		return (-1);

	temp = next->next;
	next->next = temp->next;
	free(temp);

	return (1);
}
