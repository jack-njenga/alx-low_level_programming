#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the Hashtable itself
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *arr, *next;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		arr = ht->array[i];
		while (arr)
		{
			next = arr->next;
			free(arr->key);
			free(arr->value);
			free(arr);
			arr = next;
		}
	}
	free(ht->array);
	free(ht);
}
