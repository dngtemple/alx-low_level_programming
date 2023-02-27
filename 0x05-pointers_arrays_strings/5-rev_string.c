#include "main.h"

/**
 * rev_string - reversing string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
int i;
int j;
char temp;

int len = strlen(s);

for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
