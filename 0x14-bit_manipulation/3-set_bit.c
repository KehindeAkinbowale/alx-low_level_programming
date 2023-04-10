#include"main.h"
/**
* set_bit -  a function that sets the value of a bit to 1 at a given index
* @n: a pointer to the integer values
* @index: index number to set the value of bit
* Return: 1 (Success) otherwise returns -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 32)
return (-1);
*n = ((1 << index) | *n);
return (1);
}
