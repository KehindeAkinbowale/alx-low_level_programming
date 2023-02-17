#include<stdio.h>
/**
* main - A program that prints alphabet in lowercase and then in uppercase
* Return: 0(Success)
*/
int main(void)
{
char low;
char upp;
low = 'a';
upp = 'A';
while (low <= 'z')
{
putchar(low);
low++;
}
while (upp <= 'Z')
{
putchar(upp);
upp++;
}
putchar('\n');
return (0);
}
