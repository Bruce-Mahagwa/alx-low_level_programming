#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * str_concat - concatenates a string
 * @s1: First string
 * @s2: Second string
 *
 * Return: Reurns a pointer to the string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, m, n;

	char *p1 = s1, *p2 = s2;

	char *s;

	if (p1 == NULL)
	{
		s1 = "";
	}
	if (p2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < i ; m++)
	{
		s[m] = s1[m];
	}
	for (n = 0; n < j; n++)
	{
		s[i++] = s2[n];
	}
return (s);
}
