#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character in a string
 * @str: First operand
 *
 * Return: Returns void
 */
void puts2(char *str)
{
	int i;

	int n = strlen(str);

	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
