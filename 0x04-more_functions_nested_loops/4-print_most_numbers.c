#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 * Return: Returns void
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2);
		{
			continue;
			if (i == 4)
			{
				continue;
			}
		}
		_putchar(i);
	}
	_putchar('\n');
}