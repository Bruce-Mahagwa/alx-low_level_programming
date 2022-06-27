#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * create_array - creates and initializes an array of chars
 * @size: Size of array
 * @c: Char charcater
 *
 * Return: Returns zero
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	str = &c;
	str = malloc(sizeof(char) * size);
	str[0] = 'c';
	return (0);
}
