#include"main.h"
#include<stdlib.h>
/**
* create_array - a function that creates an array of chars
* @size: number of char array to allocate space for
* @c: character in the array
* Return: Null if size is equal to zero otherwise returns a pointer
*/
char *create_array(unsigned int size, char c)
{
char *ptr_c;
ptr_c = (char *) malloc(size * (sizeof(char)));
*ptr_c = c;
if (size == 0)
{
return ((NULL));
}
else
{
return ((ptr_c));
}
}
