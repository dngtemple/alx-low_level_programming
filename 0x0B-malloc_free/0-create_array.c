#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chacracters
 * @size: size oa array
 * @c: characters
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
char *s;
int i = 0;

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
