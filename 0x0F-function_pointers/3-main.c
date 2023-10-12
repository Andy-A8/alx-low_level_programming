#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the program.
 *
 * Return: Always 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *argv[2] == '/') || (num2 == 0 && *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
