#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct type dog
 * @name: pointer to char param dog's name
 * @age: float param of dog's name
 * @owner: pointer to char dog's owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
