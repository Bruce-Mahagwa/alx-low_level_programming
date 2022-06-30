#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory to an array
 * @nmemb: number of array elements
 * @size: size of each element
 *
 * Return: Returns void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	return (0);
}
