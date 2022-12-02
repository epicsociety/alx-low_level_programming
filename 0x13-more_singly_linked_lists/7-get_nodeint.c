#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: 
 *
 * Return: pointer of index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

