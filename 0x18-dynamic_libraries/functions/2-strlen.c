#include "main.h"
#include <stdio.h>

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
