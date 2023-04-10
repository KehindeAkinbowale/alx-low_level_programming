#include"main.h"
/**
* get_endianness - a function that checks the endianness
* Return: 0 if big endian otherwise returns 1
*/
int get_endianness(void)
{
int num_value = 1;
char *endian;
endian = (char *)&num_value;
if (*endian == 1)
return (1);
return (0);
}
