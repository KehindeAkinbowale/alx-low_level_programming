#include"main.h"
/**
* clear_bit - a function that sets the value of a bit to 0 at a given index
* @n: a pointer to the decimal or integer values
* @index: index position to set bit to zero
* Return: 1 (Success) otherwsie returns -1 if there is error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 32)
return (-1);
*n &= (~(1 << index));
return (1);
}
