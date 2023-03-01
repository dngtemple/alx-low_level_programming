#include "main.h"

/**
 * leet - encoding string to leet
 * @string: string to encode
 * Return: string
 */

char *leet(char *string)
{
int i;
int j;

char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; *(string + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == string[i])
{
string[i] = b[j];
}
}
}
return (string);
}
