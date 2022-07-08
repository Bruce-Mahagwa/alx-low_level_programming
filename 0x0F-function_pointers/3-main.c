#include "3-calc.h"
/**
 * main - performs aritjmeticoperations
 * @argc: number of arguments
 * @argv: array fof pointer strings
 *
 * Return: The result
 */
int main(argc, argv[])
{
	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2] == '/' && atoi(argv[3]) == 0) || (atoi(argv[2]) == '%' && atoi(argv[3] == 0)))
	{
		printf("Error\n");
		return (100);
	}
	return (int (*get_op_func(char argv[2]))(atoi(argv[1]), atoi(argv[3])));
}
