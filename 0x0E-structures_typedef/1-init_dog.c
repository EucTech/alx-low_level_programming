#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes a variable
 * @d: The dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
