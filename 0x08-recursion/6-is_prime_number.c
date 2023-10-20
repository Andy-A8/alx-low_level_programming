#include "main.h"
#include <stdio.h>

/**
 * divisible - Checks if a number is divisible.
 * @fig: The number to check.
 * @div: The dividing number.
 *
 * Return: 0 - if the number is divisible
 *	or 1 - if the number is not divisible.
 */
int divisible(int fig, int div)
{
	if (fig % div == 0)
		return (0);

	if (div == fig / 2)
		return (1);

	return (divisible(fig, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 0 - if the integer is not a prime number
 *	or 1 - if the integer is a prime number.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, div));
}
