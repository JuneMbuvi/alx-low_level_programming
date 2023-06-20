#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer of struct dog
 */
void print_dog(struct dog *d)
{
	if (!d->name)
		d->name = "nil";
	/**if (!d->age)
		d->age = "nil";*/
	if (!d->owner)
		d->owner = "nil";
	if (!d)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
