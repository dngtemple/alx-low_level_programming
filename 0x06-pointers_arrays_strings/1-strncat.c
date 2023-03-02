#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: first pointer to a character that will be changed
 * @src: second pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\n')
{
i++;
}

while (j < n && src[j] != '\n')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
