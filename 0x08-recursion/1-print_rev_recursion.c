#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _print_rev_recursion - Reverses a string
 * @s: First operand
 *
 * Return: Returns void
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);
	if (i < 0)
	{
		return;
	}
	_print_rev_recursion(char s[i - 1]);
	puts(s);
}
