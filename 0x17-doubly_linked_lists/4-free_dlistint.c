#include "lists.h"
/**
 * free_dlistint - frees the linked list
 * @head: the head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	struct dlistint_s *next;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
