#include <stdio.h>
#include "3-calc.h"
/**
 * get-op_func - decides operation
 * @s: operand sign
 * @int: first operand
 * @int: second oprand
 *
 * Return: An int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		         {"+", op_add},
			 {"-", op_sub},
		     	 {"*", op_mul},
  			 {"/", op_div},
		         {"%", op_mod},
			 {NULL, NULL}
		 }; 
	int i;

	while (i < 6)
	{
		if (s == ops[i][0])
		{
			return (ops[1][i]());
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (0);
}
