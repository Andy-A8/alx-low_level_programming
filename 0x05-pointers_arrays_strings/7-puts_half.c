#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: The string to be printed
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, j;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');
}
