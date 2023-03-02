#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: a pointer that will be changed
 * @s2: a pointer that will also be modified
 * Return: *string_1 - *string_2
 */

int _strcmp(char *s1, char *s2)
{
char *string_1 = s1;
char *string_2 = s2;

while (*string_1 != '\0' && *string_2 != '\0' && *string_1 == *string_2)
{
string_1++;
string_2++;
}

return (*string_1 - *string_2);
}
