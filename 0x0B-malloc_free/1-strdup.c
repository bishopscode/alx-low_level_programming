#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string or NULL if
 *@str is NULL or memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0, i = 0;

	if (str == NULL)
	{
		return (NULL); /* Return NULL if str is NULL */
	}

	/* Calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = malloc((length + 1) * sizeof(char));
	/* Allocate memory for the duplicate string */

	if (duplicate == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	/* Copy the characters from the input string to the duplicate string */
	while (i < length)
	{
		duplicate[i] = str[i];
		i++;
	}

	duplicate[i] = '\0'; /* Add the null-terminator to the duplicate string */

	return (duplicate); /* Return a pointer to the duplicated string */
}

