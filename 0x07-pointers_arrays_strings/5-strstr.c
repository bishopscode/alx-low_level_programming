#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the beginning of the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *h = haystack;
	char *n = needle;

		while (*n && *h == *n)
		{
		h++;
		n++;
		}

		if (!*n)
		return (haystack);

	haystack++;
	}

	return (0);
}

