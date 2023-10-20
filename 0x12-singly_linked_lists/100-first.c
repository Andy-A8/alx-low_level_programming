#include <stdio.h>

void initial(void) __attribute__((constructor));

/**
 * initial - Prints a string before the main function is executed.
 *
 * Return: Always 0.
 */
void initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
