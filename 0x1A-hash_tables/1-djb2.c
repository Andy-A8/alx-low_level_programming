#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementating the djb2 algorithm
 * @str: The sring used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	wile ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
