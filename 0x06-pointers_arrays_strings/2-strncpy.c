#include"main.h"
#include<string.h>
/**
* _strncpy - a function that copies a string to another string
* @dest: first string pointer
* @src: second string pointer
* @n: number of string to concatinate
* Return: a dest string pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return ((dest));
}
