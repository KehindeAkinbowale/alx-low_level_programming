#include<stdio.h>
#include<time.h>
/**
* main - if statements to print output generated by the random function
* Return: 0 (Always Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("The last digit of n is: \n");
if (n > 5)
{
printf("and is greater than 5\n");
}
else if (n == 0)
{
printf("and is 0\n");
}
else if (n < 6 && n != 0)
{
printf("and is less than 6 and not 0");
}
return (0);
}
