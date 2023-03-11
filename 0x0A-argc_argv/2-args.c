#include <stdio.h>

/**
 * main - prints all argumets it receives
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
