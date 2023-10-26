#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Gets the number of bits needed to flip
 *		to get from one number to another.
 * @n: The base number.
 * @m: The number obtained after flipping bits.
 *
 * Return: The number of bits needed to flip
 *	to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)

		if (((n ^ m) >> i) & 1)
			res++;

	return (res);
}
