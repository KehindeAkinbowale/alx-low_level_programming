#include"main.h"
/**
* print_array - a function that prints n elements of an array of integers
* @a: array integer pointer
* @n: no of element printed
* Return: 0 (Success)
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
