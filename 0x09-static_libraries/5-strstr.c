#include"main.h"
#include<string.h>
/**
* _strstr - a function that locates a sub-string
* @haystack: string to be scanned for sub-string
* @needle: sub-string to be located in haystack
* Return: a pointer to sub-string or NULL if sub-string not found
*/
char *_strstr(char *haystack, char *needle)
{
char *ch;
ch = strstr(haystack, needle);
if (ch != NULL)
return ((ch));
else
{
return ('\0');
}
}
