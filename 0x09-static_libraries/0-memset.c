#include "main.h"

/**
 * _memset - filling the memory with a constant byte
 * @n: bytes of memory
 * @b: constant byte
 * @s: where  bytes are filled
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
