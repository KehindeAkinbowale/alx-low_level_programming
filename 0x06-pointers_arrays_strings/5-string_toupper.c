#include"main.h"
#include<ctype.h>
/**
* string_toupper - a function that changes all lowercase letters
* @str: character string pointer
* Return: a character string
*/
char *string_toupper(char *str)
{
int i;
char ch;
while (str[i])
{
ch = str[i];
_putchar(toupper(ch));
i++;
}
}
