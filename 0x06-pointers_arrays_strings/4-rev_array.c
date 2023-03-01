#include"main.h"
#include<stdio.h>
/**
* reverse_array - a function that reverses the content of an array
* @a: array pointer
* @n: size of array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int temp;
int index;
for (index = n - 1; index >= n / 2; index--)
{
temp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = temp;
}
}
