#include<stdio.h>
/**
* main - Prints all the alphabet in lowercase using the while loop
* Return: 0(Success)
*/
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
