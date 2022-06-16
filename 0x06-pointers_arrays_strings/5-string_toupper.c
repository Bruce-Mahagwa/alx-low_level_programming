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

	int j;

	i = strlen(ptr) - 1;
	for (j = 0; i < j; j++)
	{
		if (islower(ptr[j]) == 0)
		{
			ptr[j] = toupper(ptr[j]);
		}
	_putchar(ptr[j]);
	}
	return (0);
}
