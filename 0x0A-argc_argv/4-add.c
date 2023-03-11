#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two integers
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: 0
 *         1
 */

int main(int argc, char *argv)
{
int num1;
int num2;
int result;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (!isdigit(num1))
{
printf("Error");
return (1);
}
if (!isdigit(num2))
{
printf("Error");
return (1);
}

result = num1 + num2;
printf("%d", result);
}
