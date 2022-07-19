#include "lists.h"
#include <stdlib.h>
/**
 *find_listint_loop - this function loops through my function to
 * a recuring value which could cause al loop;
 *@head: this is the fuction to be transversed
 *Return: the node where the loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_1;
	listint_t *node_2;

	while (node_1 && node_2 && node_2->next)
	{
		node_1 = node_1->next;
		node_2 = node_2->next->next;
		if (node_1 == node_2)
			return (node_2);

	}
	return (NULL);
}
