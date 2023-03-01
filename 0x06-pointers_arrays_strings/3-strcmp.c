#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: first string
 * @s2: second string
 * Return: *string_1 - *string_2
 */

int _strcmp(char *s1, char *s2)
{
char *string_1;
char *string_2;

while (*string_1 != '\0' && *string_2 != '\0' && *string_1 == *string_2)
{
string_1++;
string_2++;
}

return (*string_1 - *string_2);
}
