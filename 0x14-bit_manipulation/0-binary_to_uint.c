#include"main.h"
#include<stdio.h>
#include<math.h>
/**
* int binary_to_uint - a function that converts a binary number to an int
* @b: character string pointer of 0 and 1
* Return: the binary equivalent otherwise returns NULL
*/ 
unsigned int binary_to_uint(const char *b)
{       
unsigned int i = 0;
unsigned int dec = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if ((b[i] < '0') || (b[i] > '1'))
return (0);
dec  = 2 * dec + (b[i] - '0');
++i;
}
return (dec);
}
