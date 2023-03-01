#include"main.h"
#include<string.h>
/**
* _strncat - a function that concatenates only n strings
* @dest: first string pointer
* @src: second string pointer
* @n: number of string to concatinate
* Return: dest string pointer from function
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return ((dest));
}
