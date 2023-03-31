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

	sp = malloc(sizeof(list_t));
	if (sp == NULL || str == NULL)
	{
		free(sp);
		return (NULL);
	}
	sp->str = strdup(str);
	sp->len = strlen(sp->str);
	if (*head != NULL)
	{
		sp->next = *head;
	}
	*head = sp;
	return (*head);
}
