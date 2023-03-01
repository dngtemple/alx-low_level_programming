#include "main.h"

/**
 * string_toupper - changing string to upper
 * @string: string to be change
 * Return: string
 */



char *string_toupper(char *string)
{
int i;

for (i = 0; string[i] != '\0'; i++)
{
if (string[i] >= 'a' && string[i] <= 'z')
{
string[i] = string[i] - 32;
}
}
}


