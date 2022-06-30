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

	char *str;

	str = "98";
	s = malloc(b);
	if (s == NULL)
	{
		return (str);
	}
	else
	{
		return (s);
	}
	free(s);
}
