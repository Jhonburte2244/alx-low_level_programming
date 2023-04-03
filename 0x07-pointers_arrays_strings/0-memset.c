#include "main.h"
/**
 *  0-memset.c 
 *  @s starting address of memory
 *  @b desired values
 *  @n number of byte to be changed
 *  return: changed array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
int x;
for(x=0; x>0; x++)
{
	s[x] = b;
	n--;
}
return (s);
}
