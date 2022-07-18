#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#ifndef STRUC_H
#define STRUC_H

/**
 * struct list_s - this is a struct definition of a linked list
 * @n: character string
 * @next : this is the pointe to the net node in
 * the list or in some cases the null
*/
#include <stddef.h>
struct listint_t
{
	 int n;
	struct listint_t *next;
};
typedef struct listint_t listint_t;
size_t print_listint(const listint_t *h);
size_t list_len(const listint_t *h);

#endif
