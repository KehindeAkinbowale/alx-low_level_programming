#include"main.h"
#include<stdlib.h>
/**
* append_text_to_file - a function that appends text at the end of a file
* @filename: the name of the file created
* @text_content: string to add at the end of the file
* Return: 1 (Success) otherwise returns -1
*/
int append_text_to_file(const char *filename, char *text_content)
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
o_file = open(filename, O_WRONLY | O_APPEND);
w_file = write(o_file, text_content, i);
if (o_file == -1 || w_file == -1)
return (-1);
close(o_file);
return (1);
}
