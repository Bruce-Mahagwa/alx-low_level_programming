#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all args
 * @argc: Number of args
 * @argv: Pointer array
 *
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
