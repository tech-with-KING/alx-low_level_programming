#ifndef HEAD_H
#define HEAD_H
#include <stddef.h>
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array,  size_t, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
