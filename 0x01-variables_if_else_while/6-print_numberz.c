#include<stdio.h>
/**
* main - A program that prints base 10 numbers using only putchar function
* Return: 0 (Success)
*/
int main(void)
{
int i;
i = 0;
while (i < 10)
{
putchar(i);
i++;
}
putchar('\n');
