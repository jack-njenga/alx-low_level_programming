#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: head of the list
 *
 * Return: sum or o if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	if (head->next == NULL)
	{
		sum = sum + head->n;
	}
	return (sum);
}
