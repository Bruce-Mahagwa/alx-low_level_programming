#include <stdio.h>
#include <string.h>
#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Changes lowercase letters to upper
 * @ptr: First string
 *
 * Return: Returns the string
 */
char *string_toupper(char *ptr)
{
	int i;

	i = strlen(ptr) - 1;
	for (i = 0; i < i; i++)
	{
		if (islower(ptr[i]) == 0)
		{
			toupper(ptr[i]);
		}
	_putchar(ptr[i]);
	}
	return (0);
}
