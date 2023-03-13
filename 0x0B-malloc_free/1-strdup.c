#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
* _strdup - a function that returns a pointer which contains copy of string
* @str: pointer to string characters
* Return: a pointer to the duplicated string otherwise returns NULL
*/
char *_strdup(char *str)
{
int i;
char *ptr_str;
int n;
n = strlen(str) + 1;
ptr_str = (char *) malloc(n * (sizeof(char)));
if (str == NULL)
{
return ((NULL));
}
else if (ptr_str != NULL)
{
for (i = 0; i < n; i++)
{
ptr_str[i] = str[i];
}
return ((ptr_str));
}
else
{
return ((NULL));
}
}
