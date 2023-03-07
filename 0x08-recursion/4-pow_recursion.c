#include"main.h"
#include<math.h>
/**
* _pow_recursion - a function that returns the value of x raised to y
* @x: first integer inputed
* @y: second integer inputed
* Return: -1 if y is less than zero
*/
int _pow_recursion(int x, int y)
{
int result = x;
if (y == 0)
{
return ((1));
}
else if (y < 0)
{
return ((-1));
}
else
{
result *= _pow_recursion(x, (y - 1));
}
return (result);
}
