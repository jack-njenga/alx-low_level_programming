#ifndef LISTS_H
#define LISTS_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list_t - name of my structure
 * @str: string to be passed
 * @len: lenth of the string
 * @next: a pointer to the same structer
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}
list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
