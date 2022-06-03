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

	if (a != 'q' && a != 'e')
	{
		for (a = 'a'; a <= 'z'; a ++)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
