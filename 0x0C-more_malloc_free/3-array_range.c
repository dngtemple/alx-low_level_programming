#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum of integers
 * @max: maximum of integers
 *
 * Return: NULL
 *         pointer to the new array
 */

int *array_range(int min, int max)
{
int *p;
int i;
int size;

if (min > max)
{
return (NULL);
}

p = malloc(sizeof(int) * size);

if (p == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
p[i] = min++;
}

return (p);
}
