#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: First operand
 *
 * Return: Returns void
 */
void print_rev(char *s)
{
	int n;

	int i;

	n = strlen(s);

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
