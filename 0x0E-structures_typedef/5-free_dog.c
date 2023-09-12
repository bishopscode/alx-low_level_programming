#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory occupied by a dog structure.
 * @d: A pointer to the dog structure to be freed.
 *
 * Description: This function takes a pointer to a dog structure and
 *              frees the memory occupied by that dog structure,
 *              including the name and owner.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);   /* Free the memory for the dog's name*/
		free(d->owner);  /* Free the memory for the dog's owner*/
		free(d);         /* Free the memory for the dog structure itself*/
	}
}

