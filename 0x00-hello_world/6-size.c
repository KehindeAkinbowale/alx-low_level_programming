#include<stdio.h>
/**
* main - prints the sizeof various data types in C using the sizeof C-operators
* Return: 0 (Success)
*/
int main(void)
{
int a;
char b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(b));
printf("Size of a int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
printf('\n');
return (0);
}
