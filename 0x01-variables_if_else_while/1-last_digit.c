#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
* main - if statements to print output generated by the random function
* Return: 0 (Always Success)
*/
int main(void)
{
int m;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
printf("The last digit of %d is %d ", n, m);
if (m > 5)
{
printf("and is greater than 5");
}
else if (m == 0)
{
printf("and is 0");
}
else if ((m < 6) && (m != 0))
{
printf("and is less than 6 and not 0");
}
return (0);
}