#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _pow_recursion - Finds the power of a number
 * @x: Number to be raised
 * @y: Power
 *
 * Return: Returns the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
