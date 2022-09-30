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

	count = 0;
	while (c != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", c->len, c->str);
		};
		count++;
	}
	return (count);
}
