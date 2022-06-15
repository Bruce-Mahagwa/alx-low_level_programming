#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - joins 2 strings
 * @dest: First operand
 * @src: Second operand
 *
 * Return: Returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j;

	int k;

	j = strlen(src);
	i = strlen(dest);
	k = i + j;
	char strings[k];

	strcpy(strings, dest);
	return (strcat(strings, src));
}
