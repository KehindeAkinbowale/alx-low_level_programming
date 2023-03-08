#include"main.h"
#include<string.h>
/**
* is_palindrome - a function that returns 1 if a string is a palindrome
* @s:character string pointer
* Return: returns 1 if string is palindromic otherwise returns 0
*/
int is_palindrome(char *s)
{
int i, len, flag = 0;
len = strlen(s);
for (i = 0; i < len; i++)
{
if (s[i] != s[len - i - 1])
{
flag = 1;
break;
}
}
if (flag)
{
return ((0));
}
else
{
return ((1));
}
}
