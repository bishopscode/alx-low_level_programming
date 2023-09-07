#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 *         Returns NULL on failure or if new_size is equal to zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr); /* If new_size is 0 and ptr is not NULL, free ptr */
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size)); /*Equivalent to malloc(new_size) if ptr is NULL */
	}

	if (new_size == old_size)
	{
		return (ptr); /* Do nothing if new_size is equal to old_size */
	}

	min_size = (old_size < new_size) ? old_size : new_size;

	new_ptr = malloc(new_size); /* Allocate memory for the new block */

	if (new_ptr == NULL)
	{
		return (NULL); /* Return NULL on malloc failure */
	}

	/* Copy contents from the old block to the new block */
	for (i = 0; i < min_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}

	free(ptr); /* Free the old block */

	return (new_ptr);
}

