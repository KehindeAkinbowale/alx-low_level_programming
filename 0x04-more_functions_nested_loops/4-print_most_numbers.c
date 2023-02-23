#include"main.h"

/**
* print_most_numbers - function that prints the numbers, from 0 to 9
* Description: Prints the numbers excluding 2 and 4
* Return: The numbers since 0 up to 9
*/
void print_most_numbers(void)
{
int x;
for (i = 0; i <= 9; i++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
