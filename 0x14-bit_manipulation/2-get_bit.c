#include"main.h"
/**
* get_bit - a function that returns the value of a bit at a given index
* @n: decimal number to obtain the bit position
* @index: index number of bit to be printed
* Return: the value of bit at index or -1 error ocurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
int num;
if (index >= 32)
return (-1);
num = ((1 & (n >> index)));
return (num);
}
