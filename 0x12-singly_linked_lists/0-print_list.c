#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all elements of a `list_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
	{
		printf("[%d] %s\n", c->len, c->str);

	}
	return (count);
}
