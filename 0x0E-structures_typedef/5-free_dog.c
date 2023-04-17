#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated to dogs
 *
 * @d: dog to be freed.
 *
 * Return : void, dog freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
