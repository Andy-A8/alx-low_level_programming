#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *	  1 and 2, seperated by a comma followed by a new line.
 *
 * Return: Always (0).
 */
int main(void)
{
	unsigned long count, fib1, fib2;
	unsigned long fib1_h1, fib1_h2, fib2_h1, fib2_h2;

	fib1 = 1;
	fib2 = 2;

	printf("%lu", fib1);

	for (count = 1; count < 91; count++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;
	}

	fib1_h1 = fib1 / 10000000000;
	fib1_h2 = fib1 % 10000000000;
	fib2_h1 = fib2 / 10000000000;
	fib2_h2 = fib2 % 10000000000;

	for (count = 92; count < 99; ++count)
	{
		printf(", %lu", fib2_h1 + (fib2_h2 / 10000000000);
		printf("%lu", fib2_h2 % 10000000000);
		fib2_h1 = fib2_h + fib1_h1;
		fib1_h1 = fib2_h1 - fib1_h1;
		fib2_h2 = fib2_h2 + fib1_h2;
		fib1_h2 = fib2_2 - fib1_h2;
	}
	printf("\n");

	return (0);
