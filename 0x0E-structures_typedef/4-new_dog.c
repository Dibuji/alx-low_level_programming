#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - to get length of strings
 * @str: the string
 * Return: length of string
 */

int str_len(char *str)
{
	int len = 0;

	while (*str != 0)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_copy - function to copy strings
 * @str: string to be copied
 * @dest: designated new location
 * Return: nothing
 */

void str_copy(char *str, char *dest)
{
	while (*str != 0)
	{
		*dest = *str;
		dest++;
		str++;
	}
	*dest = '\0';
}

/**
 * new_dog - function that creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Return: newdog; NULL, if funtion fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *newname, *newowner;
	int len1, len2;

	/* Allocate memory for new_dog struct */
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* initialize values of len1 and len2 with length of name and owner */
	len1 = str_len(name);
	len2 = str_len(owner);

	newname = malloc(sizeof(char) * (len1 + 1));
		if (newname == NULL)
		{
			free(new_dog);
			return (NULL);
		}
	str_copy(name, newname);

	newowner = malloc(sizeof(char) * (len2 + 1));
		if (newowner == NULL)
		{
			free(newname);
			free(new_dog);
			return (NULL);
		}
	str_copy(owner, newowner);

	new_dog->name = newname;
	new_dog->age = age;
	new_dog->owner = newowner;

	return (new_dog);
}
