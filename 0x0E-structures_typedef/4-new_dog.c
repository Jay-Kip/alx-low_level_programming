#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* len - check lenth of the string
* @s: string to be checked
* Return: string length
*/
int len(char *s)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
* _cpystr - function to copy the string
* @dest: pointer to the buffer we copy the string
* @src: string to be copied
* Return: pointer to the copied string
*/
char *_cpystr(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
/**
* new_dog -  function to create a new dmog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the new dog
* Return: pointer to the new dog , NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i;
	int j;

	i = len(name);
	j = len(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_cpystr(dog->name, name);
	_cpystr(dog->owner, owner);
	dog->age = age;

	return (dog);
}
