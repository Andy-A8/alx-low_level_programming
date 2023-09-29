#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated on
 * @src: The source string to be appendded to @dest
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0';)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
