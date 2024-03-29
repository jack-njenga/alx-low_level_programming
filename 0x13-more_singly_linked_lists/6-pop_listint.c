#include "lists.h"
/**
 * pop_listint - deletes the head node of a
 * listint_t linked list, and returns the head
 * node’s data (n).
 * @head: pointer to a pointer that points to the list
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (n);
	}
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
