#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
* print_strings - a function that prints strings
* @separator: string to be printed between the strings
* @n:the number of strings passed to the function
* Return: string passed as arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list arglist;
va_start(arglist, n);

for (i = 0; i < n; i++)
{
str = va_arg(arglist, char *);
if (str == NULL)
printf("nil");
printf("%s", str);
if (i != (n - 1) && (separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(arglist);
}
