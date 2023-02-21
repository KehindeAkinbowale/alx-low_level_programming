#include"main.h"
/**
* print_last_digit- Prints the last digit of a number
* @n: last number to be printed
* Return: 0 (Success)
*/
int print_last_digit(int x)
{
int n;
n = x % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
