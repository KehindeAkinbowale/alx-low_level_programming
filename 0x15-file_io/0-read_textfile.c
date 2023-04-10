#include"main.h"
#include<stdlib.h>
/**
* read_textfile - a function that reads a text file and print it the output
* @filename: a pointer to the file created
* @letters: the number of letters it should read and print
* Return: actual number of letters it could read and print otherwise 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t r_file;
ssize_t o_file;
ssize_t w_file;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char *) * letters);
if (buffer == NULL)
return (0);
o_file = open(filename, O_RDONLY);
if (o_file == -1)
return (0);
r_file = read(o_file, buffer, letters);
if (r_file == -1)
return (0);
w_file = write(STDOUT_FILENO, buffer, r_file);
if (w_file == -1)
return (0);
free(buffer);
close(o_file);
return (w_file);
}
