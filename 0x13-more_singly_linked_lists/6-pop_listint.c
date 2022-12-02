#include "lists.h"
#include <stdlib.h>

/**
 *  pop_listint- adds node on the head and makes it head
 *  @head: head of the list
 *
 * Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head =  start->next;
	n = start->n;
	free(start);
	return (n);
}
