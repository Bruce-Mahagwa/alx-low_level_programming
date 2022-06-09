#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Prints numbers 0 to 14 ten times
 *
 * Return: Returns void
 */
void more_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
