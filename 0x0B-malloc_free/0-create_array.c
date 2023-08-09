#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and
 *		initializes it with a specific char
 * @size: Size of array to initialize
 * @c: Specific character to initialize the array with
 *
 * Return: A pointer to the array, otherwise NULL
 *	if size == 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return  (array);
}
