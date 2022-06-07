#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @x: First operand
 *
 * Return: Returns the digit
 */
int print_last_digit(int x)
{
	int y;
	
	y = ((x % 10) + ((x % 10) * 10));
	return (y);
}
