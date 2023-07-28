#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: The number of elements of the array
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp = 0;
	n = n - 1;

	while (i < n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
