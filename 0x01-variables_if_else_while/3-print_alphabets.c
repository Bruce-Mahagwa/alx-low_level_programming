#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all letters
 *
 * Return: Returns 0
 */
int main(void) 
{
	char u;

	char l;

	for (u = 'a'; u <= 'z'; u++)
	{
		putchar(u);
	}
	for (l = 'A'; l <= 'Z'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
