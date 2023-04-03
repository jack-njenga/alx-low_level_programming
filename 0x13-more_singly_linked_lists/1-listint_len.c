#include "lists.h"
/**
 * listint_len - it counts the elements in the liked list
 * @h: pointer to the linked list
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
