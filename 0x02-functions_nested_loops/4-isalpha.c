#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alpha characters only
 * @c: First Operand
 *
 * Return: Returns 0 or 1
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return(0);
	}
	else if (isalpha(c) != 0)
	{
		return(1);
	}
	return(0);
}
