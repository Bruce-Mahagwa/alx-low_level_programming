#include <limits.h>
#include "main.h"
#include <stdlib.h>
/**
 * mul - multiplues 2 number
 * @argc: Number of arguments
 * @argv: Array of pointers to strings
 *
 * Return: The product
 */
int main(int argc, char *argv[])
{
	int j;

	if (argc < 3 || argc > 3)
	{
		printf("Error");
	}
	for (j = 0; j < 10; j++)
	{
		if (argv[1] != j || argv[2] != j)
		{
			printf("Error");
		}
	}
	return (argv[1] * argv[2]);
}
