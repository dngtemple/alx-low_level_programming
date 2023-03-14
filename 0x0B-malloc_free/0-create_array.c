#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chacracters
 * @size: size oa array
 * @c: characters
 *
 * Return: NULL
 *         or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;

s = malloc(sizeof(char) * size);

if (s == 0)
{
return (NULL);
}

if (s == NULL)
{
return (NULL);
}

while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
