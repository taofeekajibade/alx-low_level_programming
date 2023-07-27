#include "main.h"

/**
 * _strncat - concatenates n bytes to the destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: represents n number of bytes(chars)t to append
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
