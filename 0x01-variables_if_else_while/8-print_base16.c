#include<stdio.h>
/**
* main - A program that Hexadecimal numbers
* Return: 0 (Success)
*/
int main(void)
{
char c;
int d;
c = 'a';
d = '0';
while (d < 10)
{
putchar(d);
d++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
