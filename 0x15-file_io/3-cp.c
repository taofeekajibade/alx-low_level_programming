#include "main.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    const char *file_from;
    const char *file_to;
	int fd_from;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;
    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

    file_from = argv[1];
    file_to = argv[2];

	if (argc != 3)
	{
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return (97);
    }
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        return (98);
    }
    if (fd_to == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
        close(fd_from);
        return (99);
    }
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
		{
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
            close(fd_from);
            close(fd_to);
            return (99);
        }
    }
    if (bytes_read == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        close(fd_from);
        close(fd_to);
        return (98);
    }
    if (close(fd_from) == -1 || close(fd_to) == -1)
	{
        dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
        return (100);
    }
    return (0);
}
