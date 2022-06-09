#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for a digit one to nine
 * @c: First operand
 *
 * Returns either one or zero
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{

		if (isdigit(c))
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	return (0);
	}
}
