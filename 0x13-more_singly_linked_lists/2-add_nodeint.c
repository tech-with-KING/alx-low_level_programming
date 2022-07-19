#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint - this function transverses a linked list
 *and adds a node to the end of the list
 *@head: this is the struct to be passed to the function
 *@n: this is the first element of the list to be passed
 *Return: lisint
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *result = (listint_t *) malloc(sizeof(listint_t));
	listint_t *new;

	new = *head;
	result->n = n;
	result->next = *head;
	if ((*head))
	{
		(*head) = result;
		return ();
	}

	return (NULL);
}
