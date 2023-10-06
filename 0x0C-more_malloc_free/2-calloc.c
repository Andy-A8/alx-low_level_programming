#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an arrary of some elements
 *	of certain bytes each.
 * @nmemb: The number of elements.
 * @size: The byte size of each elemant in the array.
 *
 * Return: NULL if nmemb = 0, size = 0, or the function fails.
 *	Otherwise, a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	f = p;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (p);
}
