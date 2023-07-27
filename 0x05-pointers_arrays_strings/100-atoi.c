#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The value of the integer of the converted string.
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -1;

		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (s[i] - '0');

		else if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
	}
	return (sign * num);
}
