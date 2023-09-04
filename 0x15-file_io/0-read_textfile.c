#include "main.h"
/**
 * read_textfile - read a file
 * @filename: file name
 * @letters: letters to read
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters) 
{
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	ssize_t bytesRead = fread(buffer, 1, letters, file);
	FILE *file = fopen(filename, "r");


	if (filename == NULL) 
	{
		return (0);
	}

	if (file == NULL) 
	{
		return (0);
	}

	if (buffer == NULL) 
	{
		fclose(file);
		return (0);
	}

	if (bytesRead < 0) 
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';
	if (bytesWritten != bytesRead) 
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);

	return (bytesRead);
}
