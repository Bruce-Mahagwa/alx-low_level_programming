#include <stdio.h>
#include <string.h>
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
	int p;

	p = pow(x, y);
	return (p);
}
