#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints elementsof a struct
 * @d: a dog struct
 *
 * Return: Returns void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	else if (isdigit(d->age) == 0)
	{
		printf("Age: nil\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: nil\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
