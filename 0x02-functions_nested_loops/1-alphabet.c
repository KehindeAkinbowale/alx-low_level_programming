#include<unistd.h>
/**
* print_alphabet- a function that prints the alphabet in lowercase
* Return: 0(Success)
*/
void print_alphabet(void)
{
char ch;
while (ch <= 'z')
{
putchar(ch);
ch++;
}
}
