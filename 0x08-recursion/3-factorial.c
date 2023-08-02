#include "main.h"
#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of
 *
 * Return: The factorial of n if n > 0 or
 *	-1 to indicate an error if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
