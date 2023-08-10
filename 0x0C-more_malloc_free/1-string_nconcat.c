#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings
 * Return: a pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int i;
	unsigned int str1_len = 0;
	unsigned int str2_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str1_len] != '\0')
		str1_len++;

	while (s2[str2_len] != '\0')
		str2_len++;
	if (n >= str2_len)
		n = str2_len;
	new_string = malloc(sizeof(char) * (str1_len + str2_len + 1));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < str1_len; i++)
		new_string[i] = s1[i];
	for (i = 0; i < str2_len; i++)
		new_string[i] = s2[i];
	new_string[str1_len + n] = '\0';

	return (new_string);
}
