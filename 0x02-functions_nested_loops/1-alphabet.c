#include<stdio.h>
/**
* print_alphabet- a function that prints the alphabet in lowercase
* Return: 0(Success)
*/
void print_alphabet(void)
{
while (ch <= 'z')
{
putchar(ch);
ch++;
}
}
/**
* main - print_alphabet function is executed in the main function
* Return: 0 (Success)
*/
int main(void)
{
char ch = 'a';
print_alphabet(void);
putchar('\n');
return (0);
}
