#include"main.h"
/**
* swap_int - A function that swaps the values of two integers
* @a: first number inputed
* @b: Second number inputed
* Return: 0(Success)
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
