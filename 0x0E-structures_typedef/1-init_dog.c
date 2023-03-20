#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes struch dog
 * @d: pointer to struct
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to onwer of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
