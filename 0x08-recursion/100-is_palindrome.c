#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1); /* Empty string or single character is a palindrome */
	}

	return (is_palindrome_recursive(s, 0, length - 1)); /* Check recursively */
}

/**
 * is_palindrome_recursive - Helper function to check if a str is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: Palindrome check is complete */
	}
	else if (s[start] != s[end])
	{
		return (0); /* Characters don't match, not a palindrome */
	}

	return (is_palindrome_recursive(s, start + 1, end - 1)); /* Recurse to cntr */
}

