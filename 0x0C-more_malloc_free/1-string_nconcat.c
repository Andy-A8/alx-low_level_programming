#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to a newly allocated space in memory
 *	Otherwise, NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	p = malloc(sizeof(char) * (len + 1));

	if (p ==  NULL)
		return (NULL);
	len = 0;

	for (i = 0; s1[i]; i++)
		p[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		p[len++] = s2[i];

	p[len] = '\0';

	return (p);
}

