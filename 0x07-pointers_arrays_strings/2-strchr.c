#include"main.h"
#include<string.h>
/**
* _strchr - a function that locates a character in a string
* @s: a string pointer
* @c: a character to locate in string
* Return: If c is found - a pointer to the first occurence.
* If c is not found - NULL
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return ((s + i));
}
return ('\0');
}
