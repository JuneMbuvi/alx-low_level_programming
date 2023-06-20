#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free new dog structure
 * @d: pointer to struct dog
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
