#include "main.h"

/**
 * _strcat - concartenating two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
while (dest[i] != '\n')
{
i++;
}

j = 0;
while (src[j] != '\n')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
