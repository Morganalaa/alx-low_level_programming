#include <stdlib.h>
#include "main.h"

/**
 *  memset - fill a block of memory with a specific value
 *  @s: starting address of memory to be filled
 *  @b: the desired value
 *  @n: number of bytes to be changed
 *  Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

/**
 * _calloc - allocates memory for an array
 *  @nmemb: number of elements in the array
 *  @size: size of each element
 *  Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
