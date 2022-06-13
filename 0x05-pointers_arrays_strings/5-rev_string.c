#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: First operand
 *
 * Return: Returns void
 */
void rev_string(char *s)
{
	int i, j, k;

	i =strlen(s);
	for (j = 0; j < i / 2; j++)
	{
		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
		_putchar(k);
	}
}
