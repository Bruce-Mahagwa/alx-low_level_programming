#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints single dgit numbers
 *
 * Return: Returns zero
 */
int main(void)
{
	int i;

	int b;
	
	for (i = 0; i < 10; i++)
	{
		b = i;
		putchar(b);
	}
	putchar('\n');
	return (0);
}
