#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename: pointer
*@letters: char in the file to print
*Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int i, j, k;
if (filename == NULL)
return (0);
k = open(filename, O_RDONLY);
if (k == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
free(buf);
return (0);
}
i = read(k, buf, letters);
if (i == -1)
{
return (0);
}
j = write(STDOUT_FILENO, buf, i);
if (j == -1)
return (0);
close(k);
return (j);
}
