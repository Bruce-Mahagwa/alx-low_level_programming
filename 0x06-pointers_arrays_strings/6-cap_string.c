#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - Capitalizes every word of a string
 * @ptr: First operand
 *
 * Return: Returns zero
 */
char *cap_string(char *ptr)
{
	int i;

	for (i = 0; ptr[i] !='\0'; i++)
	{
		if (i == 0)
		{
			if ((ptr[i] >= 'a') && (ptr[i] <= 'z'))
			{
				ptr[i] = ptr[i] - 32;
				continue;
			}
		if (ptr[i] == ' ')
			{
				if ((ptr[i] >= 'a') && (ptr[i] <= 'z'))
					ptr[i] = ptr[i] - 32;
				continue;
			}
		}
		else
		{
			if ((ptr[i] >= 'A') && (ptr[i] <= 'Z'))
			{
				ptr[i] = ptr[i] + 32;
			}
		}
	putchar(ptr);
	}
	return (0);
}
