#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - Function to initialize a struct dog
 * @d: allocate memory
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
