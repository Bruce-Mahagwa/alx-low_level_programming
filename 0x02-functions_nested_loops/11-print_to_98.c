#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: First operand
 *
 * Return: Returns zero
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	
}
