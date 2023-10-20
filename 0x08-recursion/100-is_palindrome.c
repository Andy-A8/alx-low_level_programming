#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure or count
 *
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	{
		return (1 + _strlen_recursion(s));
	}
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * @len: The length of string s
 * @ind: The index of the string to be checked.
 *
 * Return: 1 - if the string is a palindrome
 *	Or 0 - if the string is not a palindrome.
 */
int check_palindrome(char *s, int len, int ind)
{
	if (s[ind] == s[len / 2])
		return (1);

	if (s[ind] == s[len - ind - 1])
		return (check_palindrome(s, len, ind + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 - if the string is a palindrome
 *	Or 0 - if the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int ind = 0;
	int len = _strlen_recursion(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, ind));
}
