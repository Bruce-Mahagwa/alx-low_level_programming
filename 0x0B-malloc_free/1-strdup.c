#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Copies a string
 * @str: String to be copied
 *
 * Return: A pointer to the string
 */
char *_strdup(char *str)
{
	char *s;

	int i = 0;

	int sum = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum = i;
	}
	s = malloc(sizeof(char) * sum);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
