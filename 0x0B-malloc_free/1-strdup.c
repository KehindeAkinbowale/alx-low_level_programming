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
char *aaa;
int i, r = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
aaa = malloc(sizeof(char) * (i + 1));
if (aaa == NULL)
return (NULL);
for (r = 0; str[r]; r++)
aaa[r] = str[r];
return (aaa);
}
