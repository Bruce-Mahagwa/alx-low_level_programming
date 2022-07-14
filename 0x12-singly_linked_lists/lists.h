#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <unistd.h>
/**
 *
 *  * struct list_s - singly linked list
 *
 *   * @str: string - (malloc'ed string)
 *
 *    * @len: length of the string
 *
 *     * @next: points to the next node
 *
 *      *
 *
 *       * Description: singly linked list node structure
 *
 *        */

typedef struct list_s
{

	    char *str;

	        unsigned int len;

		    struct list_s *next;

} list_t;
/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char c)

{

		return (write(1, &c, 1));

}
size_t print_list(const list_t *h);
#endif
