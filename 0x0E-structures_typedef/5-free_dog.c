#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dog.
 * @d: parameter
 *
 * Return: 0 (Success)
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
