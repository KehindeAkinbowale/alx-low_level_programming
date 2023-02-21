#include<stdio.h>
/**
* print_alphabet_x10 - function that prints lowercase alphabets 10 times.
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 11; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
/**
* main - execute the print_alphabet_x10 function
* Return: 0(Success)
*/
int main(void)
{
print_alphabet_x10(void);
return (0);
}
