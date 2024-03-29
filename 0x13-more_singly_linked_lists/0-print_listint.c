#include "lists.h"
/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
