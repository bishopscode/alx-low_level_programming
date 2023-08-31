#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 * Return: The result of x raised to the power of y, or -1 on error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* Return -1 for negative y */
	}
	else if (y == 0)
	{
		return (1); /* Base case: x raised to the power of 0 is 1 */
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* Recurse and multiply by x */
	}
}

