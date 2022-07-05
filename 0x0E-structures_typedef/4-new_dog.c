#include <stdlib.h>
#include <stdio.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog;

	dog = malloc(sizeof(struct dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
