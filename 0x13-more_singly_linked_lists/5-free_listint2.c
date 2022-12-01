#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  function that frees a listint_t list
 * @head: head of the linked list
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		free (*head);
		*head = (*head)->next;
	}
	
	*head = NULL;
}
