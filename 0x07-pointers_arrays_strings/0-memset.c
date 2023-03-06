#include"main.h"
#include<string.h>
/**
* _memset - a function that fills memory with a constant byte
* @s: a string pointer
* @b: a character byte to fill n number of memory
* @n: number of bytes to copy into the string
*/
char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return ((s));
}
