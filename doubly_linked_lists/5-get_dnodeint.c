#include "lists.h"

/**
*get_dnodeint_at_index - Returns the node of a dlistint_t linked list.
*@head: Pointer to the head node
*@index: Index of the node, starting from 0.
*Return: Pointer to the nth node, or NULL if the node does not exist.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
