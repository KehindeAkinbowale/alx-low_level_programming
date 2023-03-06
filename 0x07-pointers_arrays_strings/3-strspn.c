#include"main.h"
#include<string.h>
/**
*  _strspn - a function that gets the length of a prefix substring
*  @s: string pointer to scanned
*  @accept: string to match the no of characters
*  Return: number of characters matched
*/
unsigned int _strspn(char *s, char *accept)
{
int len;
len = strspn(s, accept);
return ((len));
}
