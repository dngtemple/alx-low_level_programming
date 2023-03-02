#include "main.h"

/**
 *cap_string - capitilizing a string
 *@string: string to be capitalized
 *Return: string
 */


char *cap_string(char *string)
{
int i = 0;
int j;

char a[] = "\t\n,;.!?\"(){}";

while (*(string + i))
{
if (*(string + i) >= 'a' && *(string + i) <= 'z')
{
if (i == 0)
{
*(string + i) -= 'a' - 'A';
}
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(string + i - 1))
{
*(string + i) -= 'a' - 'A';
}
}
}
}
i++;
}
return (string);
}
