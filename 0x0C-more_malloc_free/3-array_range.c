#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array
 * @min: Minimum value of array elements
 * @max: Maximum value of array elements
 *
 * Return: Returns a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;

	int i;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min));
	if (s == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
