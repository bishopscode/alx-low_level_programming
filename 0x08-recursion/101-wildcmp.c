#include "main.h"

/**
 * wildcmp - Compares two strings for similarity.
 * @s1: The first string.
 * @s2: The second string (can contain wildcard *).
 * Return: 1 if similar, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1); /* Both strings are empty, considered identical */

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1)); /* Skip consecutive * in s2 */

		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1)); /* * in s2 can replace empty string */

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		/* Compare skipping one character in s1 or s2 */
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* Characters match, continue comparison */

	return (0); /* Characters don't match, not identical */
}

