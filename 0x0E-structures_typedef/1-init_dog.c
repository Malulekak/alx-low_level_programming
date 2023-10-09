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
	d->name = (char *)malloc((strlen(name) + 1) * sizeof(char));

	d->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));

	if (d->name == NULL || d->owner == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
