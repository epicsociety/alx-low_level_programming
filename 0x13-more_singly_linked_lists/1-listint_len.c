#include "lists.h"
#include <stdio.h>

/**
 * listint_len -function that returns the number of elements in the
 * linked listint_t list
 * @h: head
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
