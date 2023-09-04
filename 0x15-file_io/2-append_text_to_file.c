#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: content
 * Return: value to return
 */
int append_text_to_file(const char *filename, char *text_content)
{
    if (filename == NULL)
	{
        return (-1);
    }

    if (text_content == NULL) {
        return (1);
    }

    int fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
	{
        return (-1);
    }

    ssize_t bytesWritten = write(fd, text_content, strlen(text_content));
    if (bytesWritten == -1)
	{
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}
