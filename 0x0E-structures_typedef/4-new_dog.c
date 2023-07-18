#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: New dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x = 0, y = 0, z;
	dog_t *doge;

	while (name[x] != '\0')
	{
		x++;
	}
	while (owner[y] != '\0')
	{
		y++;
	}
	doge = malloc(sizeof(dog_t));

	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(x *sizeof(doge->name));

	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	for (z = 0; z <= x; z++)
	{
		doge->name[z] = name[z];
	}
	doge->age = age;
	doge->owner = malloc(y * sizeof(doge->owner));

	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (z = 0; z <= y; z++)
	{
		doge->owner[z] = owner[z];
	}

	return (doge);
}
