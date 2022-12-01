#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of the list
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t next;

	while (head != NULL)

		next = head->next; /* where does the head points*/
		/* next stores the address of the next node"*/
		free(head);
		head = next;
}
