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

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
