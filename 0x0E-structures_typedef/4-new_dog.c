#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string
 * Return: the length of the string (num)
 */

int _strlen(char *s)
{
	int num;

	num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	return (num);
}


/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, num;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (num = 0; num < len; num++)
	{
		dest[num] = src[num];
	}

	dest[num] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;


	len1 = _strlen(name);
	len2 = _strlen(owner);


	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
