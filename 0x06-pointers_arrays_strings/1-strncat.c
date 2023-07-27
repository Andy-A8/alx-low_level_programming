#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated on
 * @src: The source string to be appendded to @dest
 * @n: The number of bytes from src
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0' && j < n;)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
