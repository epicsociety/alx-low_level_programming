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
	size_t count;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
