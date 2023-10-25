#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1- if one of the number contains symbols
 *	that are not digits, otherwise  - 0.
 */
int main(int argc, char *argv[])
{
	int fig, digit, sum = 0;

	for (fig = 1; fig < argc; fig++)
	{
		for (digit = 0; argv[fig][digit]; digit++)
		{
			if (argv[fig][digit] < '0' || argv[fig][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[fig]);
	}

	printf("%d\n", sum);

	return (0);
}
