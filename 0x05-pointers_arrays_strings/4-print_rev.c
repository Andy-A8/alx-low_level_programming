#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: The string to be printed
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		putchar(s[--len]);

	putchar('\n');
}
