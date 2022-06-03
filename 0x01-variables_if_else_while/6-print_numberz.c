#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints single dgit numbers
 *
 * Return: Returns zero
 */
int main(void)
{
	int i = 0;

	int b;

	while (i < 10)
	{
		b = i;
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
