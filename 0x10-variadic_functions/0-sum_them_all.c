#include"variadic_functions.h"
#include<stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters
* @n: number of arguments passed to the function
* Return: sum of all parameters if n is eqaul to zero returns 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list arglist;
if (n == 0)
return (0);
va_start(arglist, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arglist, unsigned int);
}
va_end(arglist);
return (sum);
}
