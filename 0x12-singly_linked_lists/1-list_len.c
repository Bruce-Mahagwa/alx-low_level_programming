#include "lists.h"
/**
 * list_len - returns number of elements in a linked lists
 * @h: pointer to a linked list
 *
 * Return: Returns number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		h = h->next;
		i++;
	}
	return (i);
}
