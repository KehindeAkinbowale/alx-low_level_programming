#include"main.h"
#include<string.h>
/**
* _strcmp - a function that compares two strings
* @s1: string 1 pointer
* @s2: string 2 pointer
* Return: 0 if the strings are the same otherwise a random numbers
*/
int _strcmp(char *s1, char *s2)
{
int boolean;
boolean = strcmp(s1, s2);
return ((boolean));
}
