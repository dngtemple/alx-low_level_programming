#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 *
 * Return: void
 */


void print_dog(struct dog *d)
{
if (d != NULL)
{
if ((*d).name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", (*d).name);
}
printf("Age: %f\n", (*d).age);
if ((*d).owner == NULL)
{
printf("Onwer: (nil)\n");
}
else
{
printf("Onwer: %s\n", (*d).owner);
}
}
}