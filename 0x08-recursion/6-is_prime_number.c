#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Numbers less than or equal to 1 are not prime */
	}

	return (is_prime(n, 2)); /* Start the check from divisor 2 */
}

/**
 * is_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @i: The current divisor.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int i)
{
	if (i == n)
	{
		return (1); /* n is only divisible by itself, so it's prime */
	}
	else if (n % i == 0)
	{
		return (0); /* n is divisible by i, not prime */
	}

	return (is_prime(n, i + 1)); /* Check with the next divisor */
}

