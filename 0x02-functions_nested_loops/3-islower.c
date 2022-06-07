#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case character
 *
 * Return: Returns an int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else {
		return (0);
	}
	return (0);
}

