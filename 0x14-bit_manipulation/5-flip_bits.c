#include"main.h"
/**
* flip_bits -  function that returns the number of bits to flip
* @n: first number to be fliped
* @m: the second number to flip n into
* Return: the number of bits to filp
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned long int current;
unsigned long int bit = 0;
unsigned long int ex_XOR = n ^ m;

for (i = 32; i >= 0; i--)
{
current = ex_XOR >> i;
if (current & 1)
bit++;
}
return (bit);
}
