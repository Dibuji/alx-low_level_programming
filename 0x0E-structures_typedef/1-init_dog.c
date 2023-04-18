#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: variable of struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
 * main - calling init_dog
 * Return: 0
 */

int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Neymar");

	return (0);
}
