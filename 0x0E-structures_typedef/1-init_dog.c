#include "dog.h"
/**
 * init_dog - function that initialize a struct of type dog
 * @d: pointer to struc dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
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
