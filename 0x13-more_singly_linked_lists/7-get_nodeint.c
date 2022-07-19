#include "lists.h"
/**
 * get_nodeint_at_index - gets a node at a given index
 * @head: pointer to a linked list
 * @index: index of node
 *
 * Return: Returns the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	for (count = 0; count < index; count++)
	{
		head = head->next;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
