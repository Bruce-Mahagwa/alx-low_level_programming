#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds 2 numbers
 * @argc: number of args
 * @argv: array of pointers to strings
 *
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	int sum;

	int j, k;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				for (k = 'A'; k <= 'Z'; k++)
				{
					if (strchr(argv[i], j) != NULL || strchr(argv[i], k) != NULL)
					{
						printf("%s\n", "Error");
						return (1);
					}
				}
			}
		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	else if (argc == 1)
	{
		printf("%d\n", 0);
	}
	return (0);
}
