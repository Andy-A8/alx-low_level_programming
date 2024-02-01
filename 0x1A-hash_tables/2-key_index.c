#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gets/obtains the index of a key.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair
 *	should be stored in the array of the hash table.
 *
 * Description: Use the hash_djb2 function that you wrote earlier.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % ize);
}
