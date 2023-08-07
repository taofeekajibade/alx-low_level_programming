#include <stdlib.h>
#include <string.h>
/**
 * count_words - count strings
 * @str: string
 * Return: count
 */

int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}
	return (count);
}

/**
 * strtow - splits strings into words
 * @str: string
 * Return: result
 */

char **strtow(char *str)
{
	char **result;
	int i, j, k, l, num_words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	result = malloc(sizeof(char *) * (num_words + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < num_words; j++)
	{
		while (str[i] == ' ')
			i++;
		k = i;
		while (str[k] != ' ' && str[k] != '\0')
			k++;
		result[j] = malloc(sizeof(char) * (k - i + 1));
		if (result[j] == NULL)
			return (NULL);
		for (l = 0; l < k - i; l++)
			result[j][l] = str[i + l];
		result[j][l] = '\0';
		i = k;
	}
	result[j] = NULL;
	return (result);
}
