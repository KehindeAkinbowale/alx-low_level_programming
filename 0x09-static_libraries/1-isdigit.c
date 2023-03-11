#include"main.h"
/**
* _isdigit - a function that checks for a digit (0 through 9)
* @c: charcter to be printed
* Return: 0(Success)
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
