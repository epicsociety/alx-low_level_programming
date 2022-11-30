#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head
 *
 * Return:  the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
