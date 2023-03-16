#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocating memory using malloc
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *j;

j = malloc(b);

if (j == NULL)
{
exit(98);
}

return (j);
}
