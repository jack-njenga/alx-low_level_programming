#include "lists.h"
/**
 * free_listint - a function that frees a listint_t list
 * @head: list to free;
 * Return: void;
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
