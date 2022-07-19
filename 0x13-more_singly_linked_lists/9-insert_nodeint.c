#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: double pointer to a linked list
 * @n: node to be inserted
 *
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{	
	unsigned int count;

	listint_t *new, *new_node;

	if (idx != 0)
	{
		new = *head;
		if (new == NULL)
		{
			return (NULL);
		}
		for (count = 0; count < idx; count++)
		{
			new = new->next;
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = new->next;
	new->next = new_node;
	return (new_node);
}
