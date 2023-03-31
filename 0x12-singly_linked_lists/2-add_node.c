#include "lists.h"
/**
* add_node - Adds a new node at the beginning of a list_t list.
*
* @head: A pointer to a pointer to the head of the list.
* @str: The string to be duplicated and added to the list.
*
* Return: The address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *sp;

	if (head == NULL || str == NULL)
		return (NULL);

	sp = malloc(sizeof(list_t));
	if (sp == NULL)
	{
		return (NULL);
	}
	sp->str = strdup(str);
	if (sp->str == NULL)
	{
		free(sp);
		return (NULL);
	}
	sp->len = strlen(str);
	sp->next = *head;
	*head = sp;

	return (sp);
}
