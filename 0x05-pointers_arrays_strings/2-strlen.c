#include "main.h"

/**
 * _strlen - function  that returns a  value of a string
 * @s: character's length
 * Return: len
 */

int _strlen(char *s)
{
	int i;

	for (; *s++;)
		i++;
	return (i);
}
