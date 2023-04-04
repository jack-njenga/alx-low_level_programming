#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *next;

	if (!h)
		return (0);

	tmp = *h;
	while (tmp)
	{
		count++;
		next = tmp->next;
		free(tmp);
		if (next >= tmp)
			break;
		tmp = next;
	}
	*h = NULL;

	return (count);
}
