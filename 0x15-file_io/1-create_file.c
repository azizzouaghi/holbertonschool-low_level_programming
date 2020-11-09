/**
*create_file - creates a file
*@filename: pointer
*@text_content: conten of text
*Return:  1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int i, j, k = 0;
if (filename == NULL)
return (-1);
i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (i == -1)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[k] != '\0')
k++;
j = write(i, text_content, k);
if ((j == -1) && (j != k))
return (-1);
close(i);
return (1);
}
