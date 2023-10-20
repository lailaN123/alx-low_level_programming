#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer
 *
 * Return: number of elements in h n
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	do {
		i++;
		h = h->next;
	} while (h);
	return (i);
}
