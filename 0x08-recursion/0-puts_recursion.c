#include"main.h"
/**
* _puts_recursion - a function that prints a string
* @s: string pointer to be printed
* Return: Nothing is returned
*/
void _puts_recursion(char *s)
{
int i = 0;
while (s[i] != '\0')
{
_putchar((*s));
i++;
}
_putchar('\n');
}
