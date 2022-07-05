#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Returns void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)									return;									}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
