#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numbers from 1 to 100
 * But for multiples of 3 print Fizz instead of the number,
 * For multiples of 5 print Buzz instead of the number and
 * For numbers which are multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
