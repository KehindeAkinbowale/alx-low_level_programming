#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
* init_dog - a function that initialize a variable of type struct dog
* @d: a struct data type of a pointer
* @name: pointer to the name member inside the struct
* @age: an age variable
* @owner:a pointer to the owner member inside the struct dog
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
