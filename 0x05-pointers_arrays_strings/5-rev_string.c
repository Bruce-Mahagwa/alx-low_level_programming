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
	int i;
	
	int n;

	for (i = 0; i != '\0'; ++i);
	for (n = i; n >= 0; n--)
	{
		_putchar(s[n]);
	}
}
