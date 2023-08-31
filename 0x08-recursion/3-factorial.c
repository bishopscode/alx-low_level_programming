#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 * Return: The factorial of n, or -1 on error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* Return -1 for negative n */
	}
	else if (n == 0 || n == 1)
	{
		return (1); /* Base case: factorial of 0 and 1 is 1 */
	}
	else
	{
		return (n * factorial(n - 1)); /* Recurse and multiply by n */
	}
}

