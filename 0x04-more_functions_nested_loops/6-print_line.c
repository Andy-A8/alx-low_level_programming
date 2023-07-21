#include "main.h"

/**
 * print_line - Draw a straight line in the terminal using the character _
 * @n: The number of times the underscore character should be printed
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
