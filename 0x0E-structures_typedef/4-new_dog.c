#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen -  Returns the length of a string
 * @s: The string length to get
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy -  Copies the string pointed to by src, including
 *	the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: A buffer to copy the string to
 * @src: The source of string to copy
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}

	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}

	dogg->name = _strcpy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcpy(dogg->owner, owner);

	return (dogg);
}
