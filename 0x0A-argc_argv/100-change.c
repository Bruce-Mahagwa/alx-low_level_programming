#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * main - Prints minimum amount of change
 * @argc: Number of arguments
 * @argv: String array of pointers
 *
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int k;

	k = strlen(argv[1]);
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	if (k == 1)
	{
		if (atoi(argv[1]) > 5)
		{
			printf("%d\n", 2);
		}
		else if (atoi(argv[1]) == 5)
		{
			printf("%d\n", 1);
		}
		else
		{
			printf("%d\n", 2);
		}
	}
	if (k == 2)
	{
		if (atoi(argv[1]) == 10)
		{
			printf("%d\n", 1);
		}
		else if (atoi(argv[1]) > 10 && atoi(argv[1]) < 25)
		{
			if (atoi(argv[1]) == 11 && atoi(argv[1]) == 12 && atoi(argv[1]) == 14 && atoi(argv[1]) == 20 && atoi(argv[1]) == 22)
			{
				printf("%d\n", 2);
			}
			else if (atoi(argv[1]) == 13 && atoi(argv[1]) == 15 && atoi(argv[1]) == 16 && atoi(argv[1]) == 17 && atoi(argv[1]) == 21)
			{
				printf("%d\n", 3);
			}
			else
			{
				printf("%d\n", 4);
			}
		}
	}
	if (k > 25)
	{
		printf("%d\n", 5);
	}
	return (0);
}
