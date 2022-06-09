#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 *
 * Return: Returns void
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
