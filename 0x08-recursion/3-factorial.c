#include"main.h"
/**
* factorial - a function that returns the factorial of n
* @n: Any given integer
* Return: -1 if there is an error or 1 if n is equal to zero
*/
int factorial(int n)
{
if (n < 0)
{
return ((-1));
}
else if (n == 0)
{
return ((1));
}
else
{
return (n * factorial(n - 1));
}
}
