#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to the struct dog
 * Description: if an element of d is NULL print NILL instead of this
 * element. If name is NULL print name (nil)
 * if d is NULL print nothing
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
