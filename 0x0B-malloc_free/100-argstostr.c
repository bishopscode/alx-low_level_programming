#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL); /* Return NULL if ac is 0 or av is NULL */

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Add 1 for the newline character */
	}

	str = malloc((len + 1) * sizeof(char)); /* Allocate memory for the string */
	if (str == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	/* Copy each argument and add a newline character */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0'; /* Null-terminate the string */
	return (str);
}

