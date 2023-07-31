#include "main.h"
#define NULL 0

/**
 * _strstr - function locates & return pointer to 1st occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: the pointer to index of a string when whole substring first appear.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* iterate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			} /* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL); /* No match */
}
