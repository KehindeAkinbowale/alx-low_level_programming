#include"main.h"
#include<stdlib.h>
/**
* create_file -  a function that creates a file
* @filename: the name of the file to create
* @text_content: string to write to the file
* Return: 1 (Success) otherwise returns -1 if there is an error
*/
int create_file(const char *filename, char *text_content)
{
int o_file;
int w_file;
int i = 0;
if (filename == 0)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w_file = write(o_file, text_content, i);
if (o_file == -1 || w_file == -1)
return (-1);
close(o_file);
return (1);
}
