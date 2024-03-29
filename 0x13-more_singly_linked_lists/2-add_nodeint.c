#include "lists.h"
/**
 * add_nodeint -  adds a new node at the
 * beginning of a listint_t list.
 * @head: pointer to a pointer which points
 * to the head of the linked list
 * @n: the number to add to the new node
 * Return: a pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	if (head == NULL)
	{
		return (NULL);
	}
	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
	{
		return (NULL);
	}
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
