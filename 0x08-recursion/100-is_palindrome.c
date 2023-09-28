#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to find the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - Checks if a string is a palindrome recursively.
 * @s: The string to be checked.
 * @x: The index moving from the left.
 * @y: The index moving from the right.
 * Return: 1 if palindrome, 0 otherwise.
 */
int checker(char *s, int x, int y)
{
	if (s[x] == s[y])
	{
		if (x > y / 2)
			return (1); /* Entire string has been checked */
		else
			return (checker(s, x + 1, y - 1)); /* Continue checking */
	}
	else
		return (0); /* Characters don't match, not a palindrome */
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1); /* Base case: Empty string is palindrome */

	return (checker(s, 0, _strlen_recursion(s) - 1)); /* Check the string */
}

