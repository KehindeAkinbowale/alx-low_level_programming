#include<unistd.h>
/**
* _putchar - writes the character c to the stdout
* @c: The character to print
* Return: 1 (Success)
* On error, -1 is returned and error is set appropriately
*/
int _putchar(int c)
{
return (write(1, &c, 1));
}
