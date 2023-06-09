#include "hash_tables.h"
/**
 * hash_table_print - This function prints the hash table.
 * @ht: this is the HashTable itself
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *arr;
	unsigned long int i = 0, n = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		arr = ht->array[i];
		while (arr)
		{
			if (n <= 0)
				printf("'%s': '%s'", arr->key, arr->value);
			else
				printf(", '%s': '%s'", arr->key, arr->value);
			n++;
			arr = arr->next;
		}
		/*printf("index : %ld\n", i);*/
	}
	printf("}\n");
}
