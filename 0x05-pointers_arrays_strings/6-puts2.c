#include"main.h"
/**
* puts2 - prints every other character of a string
* @str: string to be printed inside the function
* Return: 0 (Success)
*/
void puts2(char *str)
{
int i;
char ptr_str;
ptr_str = str[0];
for (i = 0; str[i] != '\0'; i++)
{
_putchar(ptr_str);
}
_putchar('\n');
}
