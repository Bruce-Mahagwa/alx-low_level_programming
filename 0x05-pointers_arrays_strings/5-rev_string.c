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
	
	n = sizeof(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
