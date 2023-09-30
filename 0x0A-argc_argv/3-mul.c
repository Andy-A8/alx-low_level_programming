#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 1 if the program receives two arguments
 *	0 if the program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int dig1, dig2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	dig1 = atoi(argv[1]);
	dig2 = atoi(argv[2]);
	mult = dig1 * dig2;

	printf("%d\n", mult);

	return (0);
}

