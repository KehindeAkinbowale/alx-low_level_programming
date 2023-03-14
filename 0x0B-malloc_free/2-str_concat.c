#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
* str_concat - a function that concatenates two strings
* @s1: firsr string pointer
* @s2:second string pointer
* Return: a new pointer to concatinated strings or return NULL on error
*/
char *str_concat(char *s1, char *s2)
{
char *ptr_cat;
int len1 = strlen(s1);
int len2 = strlen(s2);
int n;
n = len1 + len2 + 2;
if (s1 == NULL)
{
printf("%s", s2);
}
else if (s2 == NULL)
{
printf("%s", s1);
}
else if ((s1) && (s2) == NULL)
{
return ((NULL));
}
ptr_cat = (char *) malloc (n * (sizeof(char)));
if (ptr_cat == NULL)
{
return ((NULL));
}
else
{
strcat(ptr_cat, s1);
strcat(ptr_cat, s2);
}
return ((ptr_cat));
}
