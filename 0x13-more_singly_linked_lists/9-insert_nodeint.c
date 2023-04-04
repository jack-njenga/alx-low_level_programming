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
	unsigned int i = 0;
	listint_t *n_node, *temp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL || *head == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}

	temp = *head;
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (i != (idx - 1))
	{
		free(n_node);
		return (NULL);
	}

	n_node->next = temp->next;
	temp->next = n_node;

	return (n_node);
}
