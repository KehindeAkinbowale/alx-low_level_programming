#include"main.h"
#include<stdio.h>
/**
* _abs - prints the absolute value of an integer in the function
* @n: absolute number to be obtained
* Return: 0 (Success)
*/
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
