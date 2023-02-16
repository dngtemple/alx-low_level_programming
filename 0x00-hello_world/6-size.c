#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
int a;
float b;
char c;

printf("Size of an int :%lu byte(s)", (unsigned long)sizeof(a));
printf("Size of a float :%lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a char:%lu byte(s)", (unsigned long)sizeof(c));
return (0);
}
