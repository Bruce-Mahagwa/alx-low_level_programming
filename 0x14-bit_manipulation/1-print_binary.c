#include "main.h"
/**
 * print_binary - prints the binary rep of a number
 * @n: binary number
 *
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int j;

	for (j = sizeof(int) * 14; j != -1; j--)
	{
		_putchar(((n & 1 << j) >> 1) + '0');
	}
}
