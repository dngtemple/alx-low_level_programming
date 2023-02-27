#include "main.h"

/**
 * _strlen - function  that returns a  value of a string
 * @s: character's length
 * Return: len
 */

int _strlen(char *s)
{
int len;

for (; *s++;)
{
len++;
}
return (len);
}
