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
int rev[13];
int j;
for (j = 0; j <= n - 1; j++)
{
rev[j] = a[(n - 1) - j];
printf("%d\n", rev[j]);
}
}
