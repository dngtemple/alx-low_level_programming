#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocating memory for an array
 * @nmemb: elments of the array
 * @size: size of array
 *
 * Return: NULL
 *          i
 *          pointer to the allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
char *i;

unsigned int j;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
i = malloc(nmemb * size);

if (i == NULL)
{
return (NULL);
}

for (j = 0; j < (nmemb * size); j++)
{
i[j] = 0;
}
return (i);
}
