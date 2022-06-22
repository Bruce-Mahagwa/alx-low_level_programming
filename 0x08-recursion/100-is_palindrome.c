#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - checks if a string is palindrome
 * @s: First operand
 *
 * Return: Returns 0 or 1
 */
int is_palindrome(char *s)
{
	int n = strlen(s);

	char str[n];

	strcpy(str, s);
	strrev(str);
	if (s == "")
	{
		return (0);
	}
	if (strcmp(str, s) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
