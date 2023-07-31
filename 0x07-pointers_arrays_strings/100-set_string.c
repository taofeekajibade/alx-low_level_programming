#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a character
 * @s: first argument
 * @to: second argument
 */

void set_string(char **s, char *to)
{
	if (s == NULL)
		return;
	if (to == NULL)
	{
		*s = NULL;
	}
	else
	{
		*s = (char *)malloc(strlen(to) + 1);
		if (*s != NULL)
		{
			strcpy(*s, to);
		}
	}
}

