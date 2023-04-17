#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: this is a pointer
 * @name: name to initialize
 * @age: age to initialize a variable of type struct dog
 * @owner: the owner to initialiaze
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)

		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
