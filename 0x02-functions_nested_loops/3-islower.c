#include<stdio.h>
/**
* _islower - checks for lowercase alphabets
* @c: The character to be checked
* Return: 1(Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
