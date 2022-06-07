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
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		putchar('-');
	}
	else	{
		return (0);
		putchar(0);
	}
	return (0);
}
