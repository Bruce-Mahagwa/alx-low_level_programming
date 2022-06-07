#include <stdio.h>
#include "main.h"
/**
 * print -sign - Checks the sign of a number
 * @n: First operand
 *
 * Return: Returns 1, 0, or -1
 */
int print_sign(int n)
{
	char i;

	if (n > 0)
	{
		i = '+';
		return (i + 1);
	}
	else if (n < 0)
	{
		i = '-';
		return (i + -1);
	}
	else	{
		return (0);
	}
	return (0);
}
