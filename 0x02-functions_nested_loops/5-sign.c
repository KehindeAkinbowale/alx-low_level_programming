#include"main.h"
/**
* int print_sign - prints the sign of a character n
* @n: character to be printed
* Return: 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
