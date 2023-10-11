#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: The name to print.
 * @f: A pointer to the function printing the name.
 *
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
