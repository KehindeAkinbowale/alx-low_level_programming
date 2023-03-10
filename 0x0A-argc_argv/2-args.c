#include"main.h"
#include<stdio.h>
/**
* main - a function that prints all it's command line arguments
* @argc: number of arguments in the function
* @argv: a pointer pointing to an array of strings
* Return: the program name
*/
int main (int argc, char *argv[])
{
if (argc)
{
int i;
for (i = 0; i <argc; i++)
{
printf("%s\n", argv[i]);
}
}
return ((0));
}
