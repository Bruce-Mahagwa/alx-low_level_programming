#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * is_prime_number - checks for prime numbers
 * @n: First operand
 *
 * Return: Either 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n <= 0)
	{
		return (0);
	}
	if ((n % 2 != 0) && (n % 3 != 0))
	{
		return (1);
	}
	return (0);
}
