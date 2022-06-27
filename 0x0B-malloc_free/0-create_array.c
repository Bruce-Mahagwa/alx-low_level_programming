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

	unsigned int i = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
