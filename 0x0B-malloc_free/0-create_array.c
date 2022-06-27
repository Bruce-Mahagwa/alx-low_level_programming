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

	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (1)
	{
		str = malloc(INT_MAX);
		if (str == NULL)
		{
			return (NULL);
		}
	str = malloc(sizeof(unsigned int) * size);
	str[0] = c;
	i++;
	return (str);
	}
}
