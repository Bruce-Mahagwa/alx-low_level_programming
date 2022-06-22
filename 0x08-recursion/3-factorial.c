#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * factorial - finds a number's factorial
 * @n: First operand
 *
 * Return: Returns the factorial
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
