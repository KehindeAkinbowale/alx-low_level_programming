#include<stdio.h>
/**
* main - A program that prints the sum of even Fibonacci numbers
* Return: 0(Success)
*/
int main(void)
{
int i = 0;
int j = 1, k = 2, sum = k;
while (k + j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%d\n", sum);
return (0);
}
