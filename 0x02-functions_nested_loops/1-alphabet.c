#include<stdio.h>
/**
* alph- a function that prints the alphabet in lowercase
* Return: 0(Success)
*/
void alph(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
}
/**
* main - alph function is executed in the main function
* Return: 0 (Success)
*/
int main(void)
{
alph(void);
putchar('\n');
return (0);
}
