#include"main.h"
#include<ctype.h>
/**
* string_toupper - a function that changes all lowercase letters
* @str: character string pointer
* Return: a character string
*/
char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
