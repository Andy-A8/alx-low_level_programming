#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: A pointer to memory area destination
 * @src: A pointer to memory area source
 * @n: The number of bytes to copy from source
 *
 * Return: A pointer to memory area destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
