#include"main.h"
#include<stdlib.h>
/**
* malloc_checked - a function that allocates memory using malloc
* @b: number of items to allocate space for
* Return: a pointer to the allocted memory or 98 if it fails
*/
void *malloc_checked(unsigned int b)
{
int *ptr_malloc;
ptr_malloc = (int *) malloc(b * (sizeof(int)));
if (ptr_malloc != NULL)
{
return ((ptr_malloc));
}
else
{
exit((0));
}
}
