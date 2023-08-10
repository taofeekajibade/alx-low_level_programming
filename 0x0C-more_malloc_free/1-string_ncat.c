#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of strings
 * Return: a pointer to the new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int s1_len, len2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    s1_len1 = strlen(s1);
    s2_len2 = strlen(s2);
    if (n >= s2_len)
        n = s2_len;

    new_str = malloc(sizeof(char) * (len1 + n + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < s1_len; i++)
        new_str[i] = s1[i];
    for (j = 0; j < n; j++, i++)
        new_str[i] = s2[j];
    new_str[i] = '\0';

    return (new_str);
}