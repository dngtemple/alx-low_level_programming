#include "main.h"

/**
 * _calloc - allocating memory for an array
 * @nmemb: elments of the array
 * @size: size of array
 *
 * Returns: NULL
 *          pointer
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

for (j = 0; j < (nmemb * size); b++)
{
i[j] = 0;
}
return (i);
}
