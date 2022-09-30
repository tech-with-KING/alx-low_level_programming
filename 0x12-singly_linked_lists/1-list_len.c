#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t list_len(const list_t *h) {
	const list_t *c;
	size_t count;
	for (c = h, count = 0; c != NULL;  c = c->next)
	{
		count++;
	}
	return (count);
}
