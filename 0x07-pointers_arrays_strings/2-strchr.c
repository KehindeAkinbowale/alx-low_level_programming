#include"main.h"
#include<string.h>
/**
* _strchr - a function that locates a character in a string
* @s: a string pointer
* @c: a character to locate in string
* Return: a string pointer or NULL if character not found
*/
char *_strchr(char *s, char c)
{
if (strchr(s, c))
{
return ((s));
}
else
{
return ((NULL));
}
}
