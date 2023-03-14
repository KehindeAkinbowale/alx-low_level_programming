#include"main.h"
#include<stdlib.h>
#include<stdio.h>
/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: argument count
* @av: pointer to a particular pointer in an array of pointers
* Return: NULL if ac or av is equal to zero otherwise returns pointer
*/
char *argstostr(int ac, char **av)
{
char *ptr_av;
int i = 0;
if (ac == 0)
return (('\0'));
if (av == NULL)
return (('\0'));
while (av)
{
i++;
}
ptr_av = (char *) malloc((i + 1) * (sizeof(char)));
if (ptr_av == NULL)
{
return ('\0');
}
else
{
while (av[i])
{
ptr_av[i] = *(av[i]);
printf("\n");
i++;
}
return (ptr_av);
}
}
