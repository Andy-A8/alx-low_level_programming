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
	char *dup;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
