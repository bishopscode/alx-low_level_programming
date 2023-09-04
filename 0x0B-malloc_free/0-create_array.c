#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0 */
	}

	array = malloc(size * sizeof(char)); /* Allocate memory for the array */

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c; /* Initialize each element of the array with the specified character */
	}

	return (array); /* Return a pointer to the created array */
}

