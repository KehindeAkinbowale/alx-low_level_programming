#include"dog.h"
#include<stdlib.h>
/**
* _strlen - a function that finds the string length
* @s: pointer to string to determine the length
* Return: number of strings
*/
int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return ((i));
}
/**
* _strcpy - a function that copies a string from src to dest
* @src: source string of characters to be copied
* @dest: destination of strings copied from src
* Return: a pointer to the dest string
*/
char *_strcpy(char *dest, char *src)
{
int len;
int i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return ((dest));
}
/**
* new_dog - a function that creates a new dog
* @name: pointer to character array
* @age: age of the dog
* @owner: pointer to array of character
* Return: a dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr_dog;
int len1;
int len2;
len1 = _strlen(name);
len2 = _strlen(owner);
ptr_dog = malloc(sizeof(dog_t));
if (ptr_dog == NULL)
return (NULL);
ptr_dog->name = (char *)malloc((len1 + 1) * (sizeof(char)));
if (ptr_dog->name == NULL)
{
free(ptr_dog->name);
free(ptr_dog);
return (NULL);
}
ptr_dog->owner = (char *)malloc((len2 + 1) * (sizeof(char)));
if (ptr_dog->owner == NULL)
{
free(ptr_dog->owner);
free(ptr_dog);
return (NULL);
}
_strcpy(ptr_dog->name, name);
_strcpy(ptr_dog->owner, owner);
ptr_dog->age = age;
return (ptr_dog);
}
