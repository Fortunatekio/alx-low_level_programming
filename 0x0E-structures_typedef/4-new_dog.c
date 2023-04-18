#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - return the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int f;

	f = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	return (f);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int red, f;

	red = 0;

	while (src[red] != '\0')
	{
		red++;
	}
	for (f = 0; f < red; f++)
	{
		dest[f] = src[f];
	}
	dest[f] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int red1, red2;

	red1 = _strlen(name);
	red2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog = malloc(sizeof(char) * (red1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (red2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
