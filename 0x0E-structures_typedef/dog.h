#ifndef DOG_H
#define DOG_H
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
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
