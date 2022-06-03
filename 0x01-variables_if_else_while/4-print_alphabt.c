#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints letters except q and e
 *
 * Return: Returns 0
 */
int main(void)
{
	int a;
	while (a != 'e' && a != 'q')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
