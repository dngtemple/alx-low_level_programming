#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples two integers
 * @argc: couter
 * @argv: values
 *
 * Return: 0
 */

int main(int argc, char  **argv)
{
int num1;
int num2;
int result;

if (argc != 3)
{
printf("Error");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
}

