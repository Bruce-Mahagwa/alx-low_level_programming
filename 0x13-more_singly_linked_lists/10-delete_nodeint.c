#include "lists.h"
/**
 * delete_nodeint_at_index - deletes nodeint at an index
 * @head: double pointer to a linked list
 * @index: index of a linked list
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;

	listint_t *new, *new_node;

	count = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	new = *head;
	if (index == 0)
	{
		new_node = (*head)->next;
		free((*head));
		*head = new_node;
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		if (new->next == NULL)
		{
			return (-1);
		}
		new = new->next;
	}
	new_node = new->next;
	new->next = new_node->next;
	free(new_node);
	return (1);
}
