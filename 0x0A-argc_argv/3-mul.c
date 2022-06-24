#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Multiplies 2 args
 * @argc: Total args
 * @argv: Array of pointers to strings
 *
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
			printf("%d\n", mul);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
