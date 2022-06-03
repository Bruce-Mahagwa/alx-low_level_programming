#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints letters except q and e
 *
 * Return: Returns 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{
			continue;
		}
		if (a == 'q')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
