#include"main.h"
#include<stdlib.h>
/**
* _calloc -  a function that allocates memory for an array, using malloc
* @nmemb: array name containing elements
* @size: size of elements in the nmemb array
* Return: a pointer to the memory array nmemb otherwise returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb);
if (ptr == NULL)
return (NULL);
return (ptr);
}
