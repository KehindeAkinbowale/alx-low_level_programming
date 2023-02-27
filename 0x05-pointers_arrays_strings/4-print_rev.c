#include"main.h"
/**
* print_rev - a function that prints a string in reverse
* @s: String to be printed
* Return: 0(Success)
*/
void print_rev(char *s)
{
int i;
int strlen = 0;
int j;
while (*s != '\0')
{
strlen++;
}
i = strlen - 1;
for (j = i; j > 0; j--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
