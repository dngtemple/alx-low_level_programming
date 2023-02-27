#include "main.h"

/**
 * _strlen - function  that returns a  value of a string
 * @s: character's length
 * Return: len
 */

int _strlen(char *s)
{
int len = 0;

if (*s != '\0')
{
len++;
s++;
}
if (*s == '\0')
{
len = 0;
}

return (len);
}
