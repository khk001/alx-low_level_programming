#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Return: 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
