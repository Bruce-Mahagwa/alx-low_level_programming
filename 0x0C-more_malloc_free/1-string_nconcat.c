#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concats 2 strings
 * @s1: First string
 * @s2: Second string
 * @n: Length of s2 that will be appended to s1
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;

	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	s = malloc(sizeof(char) * (i + n));
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		s[i++] = s2[l];
	}
	return (s);
}

