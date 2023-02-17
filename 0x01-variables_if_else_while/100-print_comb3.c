#include<stdio.h>
/**
* main - A program that prints combinations of two digits
* Return: Always 0(Success)
*/
int main(void)
{
int c;
int d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar ('0' + d);
putchar ('0' + c);
if (c + d != 17)
{
putcahr(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');
return (0);
}
