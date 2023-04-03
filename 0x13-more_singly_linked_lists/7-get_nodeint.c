#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * listint_t linked list.
 * @head: the pointer to the list
 * @index: index of the elements of the list
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
