#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a listint_t list
 * @head: head of double pointer
 * @n: int add the list
 *
 * Return: pointer to the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr_to_new;
	listint_t *temp; 

	if (head == NULL)
		return (NULL);

	ptr_to_new = malloc(sizeof(listint_t));
	if (ptr_to_new == NULL)
		return (NULL);
	
	ptr_to_new->n = n;
	ptr_to_new->next = NULL;
	if (*head == NULL)
	{
		*head = ptr_to_new;
		return (ptr_to_new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr_to_new;
	return (ptr_to_new);
}
