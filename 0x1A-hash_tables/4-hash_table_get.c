#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table to search for the key
 * @key: the key to search
 *
 * Return: Returns the value associated with the element, or
 * NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *arr;

	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	arr = ht->array[index];
	while (arr != NULL)
	{
		if (strcmp(arr->key, key) == 0)
		{
			return (arr->value);
		}
		arr = arr->next;
	}

	return (NULL);
}
