#include"dog.h"
#include<stdio.h>
/**
* print_dog -  a function that prints a struct dog
* @d: a pointer to the struct dog
* Return: nothing
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = ("nil");
if (d->owner == NULL)
d->owner = ("nil");
printf("Name = %s\n", d->name);
printf("Age = %.1f\n", d->age);
printf("Owner = %s\n", d->owner);
}
