#include "main.h"
#include <stdio.h>

/**
 * get_sqrt - Gets the natural square root of a number
 * @num: The square root number to get
 * @base: The base to be tested with
 *
 * Return: The natural square root of n if n has a natural square root or
 *	-1 if n does not have a natural square root.
 */
int get_sqrt(int num, int base)
{
	if (num * num == base)
	{
		return (num);
	}

	if (num * num > base)
	{
		return (-1);
	}

	return (get_sqrt(num + 1, base));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The square root number to return
 *
 * Return: The natural square root of n if n has a natural square root or
 *	-1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (get_sqrt(1, n));
}
