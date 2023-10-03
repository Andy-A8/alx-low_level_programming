#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 * @str: The string to copy
 *
 * Return: A pointer to the duplicated string, otherwise NULL
 *	if str == 0 or insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *d;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		len++;

	d = malloc(sizeof(char) * len);

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[len] = '\0';

	return (d);
}
