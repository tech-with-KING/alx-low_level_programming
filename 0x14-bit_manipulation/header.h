#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
unsigned int binary_to_unint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int flip_bit(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
