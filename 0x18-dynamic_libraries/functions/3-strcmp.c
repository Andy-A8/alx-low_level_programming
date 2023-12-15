#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * Return: 0, if the s1 and s2 are equal.
 * A negative value if s1 is less than s2.
 * A positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i]  == s2[i];)
		i++;

	return (s1[i] - s2[i]);
}
