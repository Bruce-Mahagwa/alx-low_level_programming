#include <stdio.h>
/**
 * struct dog - Creates a struct named dog
 * @name: Dog's name a char pointer
 * @age: Dog's age a float
 * @owner: Dog's owner a char pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
