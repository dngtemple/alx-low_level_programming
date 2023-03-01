#include "main.h"

/**
 * _strcat - concartenating two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

	while (dest[i] != '\n')
	{
		i++;
	}

	while (src[j] != '\n')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
