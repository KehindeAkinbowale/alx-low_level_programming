#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
* err_close - a function that checks if a file can be opened to read or write
* @fd: a file descriptor (file to or file from)
* Return: nothing from a void function
*/
void err_close(int fd)
{
int c;
c = close(fd);
if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* error_file - A function that checks if a file can be opened to read or write
* @file_from: file to copy from
* @file_to: file to copy to
* @argv: array of pointers to function arguments
* Return: Nothing from a void function
*/ 
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
* main - a program that copies the contents of a file into another
* @argc: number of arguments
* @argv: array of pointers to function arguments
* Return: 0 (Success)
*/
int file_from, file_to, c;
ssize_t rnum_chars, w;
char buffer[1024];
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
rnum_chars = 1024;
while (rnum_chars == 1024)
{
rnum_chars = read(file_from, buffer, 1024);
if (rnum_chars == -1)
error_file(-1, 0, argv);
w = write(file_to, buffer, rnum_chars);
if (w == -1)
error_file(0, -1, argv);
}
err_close(file_from);
err_close(file_to);
return (0);
}
