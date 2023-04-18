#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilaize a variable of type of struct dog
 * @d: pointer for struct dog to initialize
 * @name: name of initialization
 * @age: age of initialization
 * @owner: owner of initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
