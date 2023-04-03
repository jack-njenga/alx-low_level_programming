#include "lists.h"
/**
 * sum_listint - does the sum of all data (n) of the list
 * @head: pointer to the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0, i;

	while (head != NULL)
	{
		i = head->n;
		sum = i + sum;
		head = head->next;
	}
	return (sum);
}
