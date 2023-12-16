#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string
 * @dest: The destination of the pointer to the string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n;)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
