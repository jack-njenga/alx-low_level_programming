#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list.
 * @head: pointer to a pointer that points to the linked list
 * @n: an integer to add
 * Return: return the address of the new element or NULL;
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
	{
		return (NULL);
	}
	new_tail->n = n;
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_tail;
	}

	return (new_tail);
}
