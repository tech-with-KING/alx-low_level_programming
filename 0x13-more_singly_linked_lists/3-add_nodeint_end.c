#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - this function transverses a linked list
 *@h: this is the struct to be passed to the function
 *Return: i
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *result = (listint_t*) malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		(*head)->n = n;
		(*head)->next = NULL;
	}
	
	return (*head);
}
