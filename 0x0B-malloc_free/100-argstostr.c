#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments
 * @ac: argument 1
 * @av: argument 2
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[k++] = av[i][j];
		result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}
