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
	int n;

	int i;

	n = strlen(s);
	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
