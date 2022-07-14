#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: pointer to a linked list
 *
 * Return: Returns void
 */
void free_list(list_t *head)
{
	list_t *new_node, *next_node;

	new_node = head;
	while (new_node != NULL)
	{
		next_node = new_node->next;
		free(new_node->str);
		free(new_node);
		new_node = next_node;
	}
}
