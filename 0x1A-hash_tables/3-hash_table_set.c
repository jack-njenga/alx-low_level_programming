#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: The key. can not be an empty string
 * @value: the value associated with the key.
 * value must be duplicated. value can be an empty string
 *
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *arr, *tmp;
	unsigned long int index;

	if (!key || !ht || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		arr = malloc(sizeof(hash_node_t));
		if (arr)
		{
			arr->value = strdup(value);
			arr->key = strdup(key);
			arr->next = NULL;
		}
		ht->array[index] = arr;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		arr = malloc(sizeof(hash_node_t));
		if (arr)
		{
			arr->value = strdup(value);
			arr->key = strdup(key);
			arr->next = ht->array[index];
		}
		ht->array[index] = arr;
	}
	return (1);
}

/**
 * set_helper - hash_table_set helper function
 * @key: the key
 * @value: the value
 *
 * Return: the arr or NULL
 */
hash_node_t *set_helper(const char *key, const char *value)
{
	hash_node_t *arr;

	arr = malloc(sizeof(hash_node_t));
	if (!arr)
	{
		exit(0);
		return (NULL);
	}
	else
	{
		arr->key = strdup(key);
		arr->value = strdup(value);
		arr->next = NULL;
	}

	return (arr);
}
