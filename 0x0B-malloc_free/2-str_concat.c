#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates a string
 * @s1: First string
 * @s2: Second string
 *
 * Return: Reurns a pointer to the string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;

	int i, j, k, l, m, n;

	for (i = 0; s1[i] != '\0'; i++)
	{
		k = i;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		l = j;
	}
	s = malloc(sizeof(char) * (k + l));
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (m = 0; i < k; m++)
	{
		s[m] = s1[m];
	}
	for (n = (k - 1); n < l; n++)
	{
		s[n] = s2[n];
	}
	return (s);
}
