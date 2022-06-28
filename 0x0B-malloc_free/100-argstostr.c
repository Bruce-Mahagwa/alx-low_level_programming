#include <stdlib.h>
#include "main.h"
/**
 * argstostr - converts args to strings
 * @ac: Number of arguments
 * @av: Arrays of args
 *
 * Return: A pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *a;

	int i;

	a = malloc(sizeof(char) * ac);
	if (ac == 0)
	{
		return (NULL);
	}
	if (*av == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		a[i] = **(av + i);
	}
	return (a);
}
