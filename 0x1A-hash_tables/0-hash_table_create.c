#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 *
 * @size: size is the size of the array
 * Return: Returns a pointer to the newly created hash table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table; 
	hash_node_t **arr;

	hash_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	arr = malloc(size * sizeof(hash_table_t *));
	if (!hash_table || !arr)
		return (NULL);

	hash_table->size = size;
	hash_table->array = arr;

	return (hash_table);
}
