#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *struct hash_node_s - node of a hash table
 *
 *@key: the key is unique to the table
 *@value: this is the real value to be hashed at all instances
 *@next: a pointer to the next node of the table 
 */



struct hash_node_s
{
	char *key;
	char *value;
	hash_node_s *next;
	
};
typedef hash_node_s hash_node_t;
/**
 *struct hash_tables_s - node of a hash table
 *
 *@size: this is the real value to be hashed at all instances
 *@h: a pointer to the next node of the table 
 */



struct hash_tables_s
{
	unsigned long int size;
	char *value;
	hash_node_t **array;
	
};
typedef hash_tables_s hash_tables_s_t;
