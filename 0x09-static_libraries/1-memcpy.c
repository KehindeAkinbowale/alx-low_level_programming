#include"main.h"
#include<string.h>
/**
* _memcpy - a function that copies memory area
* @dest: a memory pointer
* @src: a memory pointer
* @n: number of bytes to be copied
* Return: a dest memory pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return ((dest));
}
