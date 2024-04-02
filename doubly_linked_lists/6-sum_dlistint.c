#include "lists.h"

/**
*sum_dlistint - Returns the sum of all the data (n) of linked list.
*@head: Pointer to the head node.
*Return: The sum of all the data (n) of the list.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
