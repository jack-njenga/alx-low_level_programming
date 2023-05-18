#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a
 * given position.
 * @h: pointer to a pointer to the head of the list
 * @idx: the index of the list where the new node should
 * be added. Index starts at 0
 * @n: integer to add.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0;
	dlistint_t *new, *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}

	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
