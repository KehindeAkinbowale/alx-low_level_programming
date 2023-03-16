#include"main.h"
#include<stdlib.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: number of items to allocate space for
* Return: a pointer to the allocted memory or 98 if it fails
*/
void *malloc_checked(unsigned int b)
{
void *ptr_malloc;
ptr_malloc = malloc(b);
if (ptr_malloc == NULL)
exit(98);
return ((ptr_malloc));
}
