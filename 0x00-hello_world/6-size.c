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
long int d;
long long e;

printf("Size of an int :%lu byte(s)", (unsigned long)sizeof(a));
printf("Size of a float :%lu byte(s)", (unsigned long)sizeof(b));
printf("Size of a char:%lu byte(s)", (unsigned long)sizeof(c));
printf("Size of a long int:%lu byte(s)", (unsigned long)sizeof(d));
printf("Size of a long long:%lu byte(s)", (unsigned long)sizeof(e));

return (0);
}
