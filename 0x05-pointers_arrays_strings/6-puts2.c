#include"main.h"
/**
* puts2 - prints every other character of a string
* @str: string to be printed inside the function
* Return: 0 (Success)
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(*str);
}
_putchar('\n');
}
