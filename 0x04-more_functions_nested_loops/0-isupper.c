#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if a letter is uppercase
 *
 * @c: First operand
 *
 * Return: Returns either one or 0
 */
int _isupper(int c)
{
	c = 'A';
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
