#include<stdio.h>
/**
* main - A program that prints all alphabets in lowercase except q and e
* Return: 0(Success)
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if ((c != 'q') && (c != 'q') && c <= 'z')
putchar (c);
c++;
}
putchar('\n');
return (0);
}
