#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: pointer to a linked list
 *
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0]");
			printf("(nil)\n");
		}
		else
		{
			printf("[%d]", h->len);
			printf("%s\n", h->str);
		}
			h = h->next;
			i++;
	}
	return (i);
}
