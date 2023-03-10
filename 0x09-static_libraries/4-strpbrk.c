#include"main.h"
#include<string.h>
/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: string to be scanned
* @accept: string to be matched
* Return: a character byte that matches with string accept
*/
char *_strpbrk(char *s, char *accept)
{
char *ch;
ch = strpbrk(s, accept);
if (ch != NULL)
return ((ch));
else
{
return ('\0');
}
}
