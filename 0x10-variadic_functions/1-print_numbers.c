#include"variadic_functions.h"
#include<stdarg.h>
#include <stddef.h>
#include<stdio.h>
/**
* print_numbers - a function that prints numbers
* @separator: a character to be inserted between numbers
* Return: numbers passed as arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
unsigned int i = 0;
va_list arglist;
va_start(arglist, n);
if (separator  == NULL)
printf("NULL");
for (i = 0; i < n; i++)
{
x = va_arg(arglist, unsigned int);
printf("%d", x);
if (i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(arglist);
}
