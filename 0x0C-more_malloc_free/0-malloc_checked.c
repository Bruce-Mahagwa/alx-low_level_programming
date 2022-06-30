#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - assigns memory using malloc
 * @b: memory allocated
 *
 * Return: Reurns void
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		return (s);
	}
	free(s);
}
