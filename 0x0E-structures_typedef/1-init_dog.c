#include <stdio.h>
#include <stdlib.h>
#ifndef dog
#define dog dog
#endif
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
	struct dog *p = d;
	p = malloc(sizeof(struct dog));
	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;
}
