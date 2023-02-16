#include<stdio.h>
/**
* main - printts the sizeof various data types in C using the sizeof operator
* Return: 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char = %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of a int = %lu bytes\n", (unsigned long)sizeof(b));
printf("Size of a long int = %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of a long long int = %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of a float = %lu bytes\n", (unsigned long)sizeof(f));
return (0);
}
