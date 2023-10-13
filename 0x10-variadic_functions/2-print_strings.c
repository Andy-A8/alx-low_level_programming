#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *wrd;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		wrd = va_arg(ap, char *);

		if (wrd == NULL)
			printf("(nil)");

		else
			printf("%s", wrd);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
