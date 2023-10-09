#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to free.
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
