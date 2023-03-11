#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s integer
 * @s: string to check
 *
 * Return: 0
 *         1
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}
return (1);
}
/**
 * main - adds two positive integers
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 *         1
 *
 */


int main(int argc, const char *argv[])
{
int i = 0;
int usedCoin = 0;
int coin = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}

if (isInteger(argv[1]))
{
i = atoi(argv[1]);
while (i > 0 && coin <= 4)
{
if (i >= coins[coin])
{
i -= coins[coin];
usedCoin++;
}
else
{
coin++;
}
}
}
printf("%d\n", usedCoin);

return (0);
}
