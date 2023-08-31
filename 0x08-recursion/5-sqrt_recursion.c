#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root of n, or -1 if n doesn't have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 for negative n */
	}
	else if (n == 0 || n == 1)
	{
		return (n); /* Base case: square root of 0 and 1 is the number itself */
	}

	return (_sqrt(n, 1)); /* Start the search for square root from 1 */
}

/**
 * _sqrt - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current candidate for the square root.
 * Return: The square root of n, or -1 if n doesn't have one.
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i); /* Found the square root */
	}
	else if (i * i > n)
	{
		return (-1); /* n doesn't have a natural square root */
	}

	return (_sqrt(n, i + 1)); /* Recurse with the next candidate */
}

