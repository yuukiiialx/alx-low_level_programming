#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: A pointer to a dog_t structure.
 *
 * Description: This function frees memory allocated for the name and owner
 * strings within the dog_t structure and then frees the memory for the
 * dog_t structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}

