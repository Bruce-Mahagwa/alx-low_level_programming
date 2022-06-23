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
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
