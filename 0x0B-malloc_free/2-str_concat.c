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
	int i, j, k, l, m, n, o;

	char *s;

	for (i = 0; s1[i] != '\0'; i++)
	{
		k = i;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		l = j;
	}
	s = malloc(sizeof(char) * (k + l + 2));
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (m = 0; s1[m] != '\0'; m++)
	{
		s[m] = s1[m];
	}
	o = k + 1;
	for (n = 0; s2[n] != '\0'; n++)
	{
		s[o + n] = s2[n];
	}
return (s);
}
