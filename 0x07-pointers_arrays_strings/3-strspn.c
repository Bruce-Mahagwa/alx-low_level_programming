#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - gets the length of a string prefix
 * @s: String to be matched
 * @accept: Portion of string
 *
 * Return: Number of bytes that match the s
 */
unsigned int _strpan(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
