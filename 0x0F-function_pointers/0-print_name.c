#include "function_pointers.h"
/**
 * print_name - prints the name of a person
 * @name: name tobe printed
 * @f: function pointer
 *
 * Return: Returns void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
