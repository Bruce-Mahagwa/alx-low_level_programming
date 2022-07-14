#include "lists.h"
/**
 * len - finds length of string
 * @: a string
 *
 * Return: Returns length
 */
int len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 * add_node - adds a node at the front
 * @head: reference to the head of a list
 * @str: data to be inserted
 *
 * Return: Address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len(strdup(str));
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
