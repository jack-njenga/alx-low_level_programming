#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position.
 * @head: list
 * @idx: the given position
 * @n: number to add
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *n_node, *tmp, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || head == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	tmp = *head;
	while (tmp != NULL)
	{
		if (idx == 0)
		{
			temp = tmp->next;
			tmp->next = n_node;
			n_node->next = temp;
			return (n_node);
		}
		if (i == idx)
		{
			temp = tmp->next;
			tmp->next = n_node;
			n_node->next = temp;
			return (n_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
