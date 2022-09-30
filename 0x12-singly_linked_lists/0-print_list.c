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
	size_t count;
	const list_t *c;
	
	for (c = h, count = 0; c != NULL;  c = c->next ,count++)
	{
		if (c-> str == NULL || c->len == '\0')
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n",c->len, c->str);
		}

	}
	return (count);
}


	
			       

