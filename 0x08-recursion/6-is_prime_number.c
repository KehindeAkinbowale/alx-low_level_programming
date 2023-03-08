#include"main.h"
/**
* is_prime_number - a function that finds the prime number of an integer
* @n: the given integer
* Return: 0 if the number isn't a prime number or n if its a prime number
*/
int is_prime_number(int n)
{
if (n < 0)
return ((0));
else if (n == 1)
return ((0));
else if (n == 2)
return ((1));
else if ((n % 1 == 0) && (n % 2 == 0))
return ((0));
else if ((n % 1 == 0) && (n % 3 == 0))
return ((0));
else if ((n % 1 == 0) && (n % 5 == 0))
return ((0));
else if ((n % 1 == 0) && (n % n == 0))
return ((1));
else
{
return (is_prime_number(n));
}
}
