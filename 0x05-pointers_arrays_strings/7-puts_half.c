#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half a string
 * @str: First operand
 *
 * Return: Returns void
 */
void puts_half(char *str)
{
	int n;

	int i;

	int j;

	int k;

	int y;

	n = strlen(str);
	j = n / 2;
	k = n - 1;
	y = k / 2;
	if (j % 2 == 0)
	{
		for (i = j + 1; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = y; i < n; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
