#include "main.h"
#include <stdio.h>

/**
 * check_prime - Checks if the number is a prime number
 * @num: The number to check
 * @d: The dividing number
 *
 * Return: 1 if the input integer is a prime number,
 *	Otherwise return 0.
 */
int check_prime(int num, int d)
{
	if (num % d == 0)
		return (0);
	
		return (i + 1, num);
	
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to check
 *
 * Return: 1 if the input integer is a prime number,
 *	Otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n >= 2 && n <=3)
		return (1);

	return (check_prime(n, i));
}
