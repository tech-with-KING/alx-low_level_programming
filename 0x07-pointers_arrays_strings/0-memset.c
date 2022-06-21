#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset - this function sets a value to a memory location
 *@value: this parameter is the dest param
 *@b:this character is to be assigned to the
 *@n: this parameter is the length value
 *Return:value
 */

int main(void)
{
	char (*a)[8];

	int i ;
	int j;
	j =0;
	i = 0;
	char p[8][8] ={{'b','b','c','d','e',' ','d','k'},
	{'a','b','c','d','e','f','p','k'},{'a','b','c','d','e','f','d','k'},{'a','b','c','d','e','f','d','k'},
	{'l','b','c','d','e','f','l','k'},{'a','b','c','d','e','f','d','k'},{'a','b','c','d','e','f','d','k'},
	{'a','b','c','d','e','l','d','k'}
	};
	
	for ( ; i < 8;i++)
	{
		a =*(p+i);
		for ( ; j < 8; j++)
		{
			printf(" %c\n",(*a))[j];
		}	
	}
	
	
	return(0);

}


// char *_strchr(char *s, char c)
// {
// 	int i;
// 	for ( i = 0; s[i] !='\0'; i++)
// 	{
// 		if (s[i]==c)
// 		{
// 			return(s[i]);
// 			break;
			
// 		}
// 		else
// 		{
// 			return(NULL);

// 		}
// 	}
// 	return s;
// }


// char *_memset(char *value, char b, unsigned int n)
// {
// 	char *boll;
// 	int i = 0;
// 	while (i < n)
// 	{
// 		boll = &b;
// 		value[i] = *boll;
// 		i++;
// 	}
// 	printf("%s\n",value);
// 	return (value);
// }
