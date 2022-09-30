#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - print all elements of a `list_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL;  c = c->next)
	{
		count++;
	}
	return (count);
}
