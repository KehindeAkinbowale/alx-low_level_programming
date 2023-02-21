#include"main.h"
/**
* times_table - prints the nine times table starting with zero
* Return: 0(Success)
*/
void times_table(void)
{
int num = 9;
int result;
int i;
int j;
for (i = 0; i < 1; i++)
{
for (j = 0; j < 12; j++)
{
result =  num * j;
_putchar(result);
}
}
}
