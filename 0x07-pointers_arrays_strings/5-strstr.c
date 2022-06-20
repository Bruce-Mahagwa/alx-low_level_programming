#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - finds first occurrence of a substring
 * @haystack: String to be searched
 * @needle: Substring to be searched for
 *
 * Return: Returns substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
