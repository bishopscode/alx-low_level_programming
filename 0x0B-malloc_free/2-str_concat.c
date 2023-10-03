#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A ptr to the newly allocated concatenated str or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	while (*s1)
	{
		concatenated[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		concatenated[i] = *s2;
		i++;
		s2++;
	}

	concatenated[i] = '\0';

	return (concatenated);
}

