#include"main.h"
#include<stdio.h>
/**
* main - a program that prints the number of arguments passed into it
* @argc: number of arguments in the function
* @argv: a pointer pointing to an array of strings
* Return: the number of arguments
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return ((0));
}
