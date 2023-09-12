#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int l = 0, m = 0, n;
	dog_t *newdog;

	/* Calculate the length of the name and owner strings */
	while (name[l] != '\0')
		l++;
	while (owner[m] != '\0')
		m++;

	/* Allocate memory for the new dog structure */
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	newdog->name = malloc((l + 1) * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc((m + 1) * sizeof(char));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	/* Copy the characters from the input strings to the allocated memory */
	for (n = 0; n <= l; n++)
		newdog->name[n] = name[n];

	for (n = 0; n <= m; n++)
		newdog->owner[n] = owner[n];

	newdog->age = age;

	return (newdog);
}

