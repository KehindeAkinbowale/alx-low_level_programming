#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - using if statements to print numbers from the RAND function
* Return: 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("n is positive\n");
}
else if (n == 0)
{
printf("n is zero\n");
}
else if (n < 0)
{
printf("n is negative\n");
}
else
{
printf("n is an invalid number");
}
return (0);
}
