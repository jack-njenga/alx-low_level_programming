#include "hash_tables.h"
/**
 * key_index - this function computes the index of a key
 * @key: the key to use
 * @size: size of the array of the hash table
 *
 * Return: Returns the index at which the key/
 * value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key) % size;

	return (hash);
}
