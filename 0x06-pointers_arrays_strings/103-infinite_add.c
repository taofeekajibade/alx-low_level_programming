#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - commented out
 * reverse_string -  reverses characters
 * infinite_add: prints inifinite addition
 * @str: parameter
 * Return: str
 */

char *reverse_string(char *str) 
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r) 
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i, sum;

    /* Calculate the maximum length of the result */
    int max_len = (len1 > len2) ? len1 : len2;
    max_len = (carry > 0) ? (max_len + 1) : max_len;

    if (max_len >= size_r) {
        /* Result cannot be stored in the buffer */
        return 0;
    }

    /* Reverse the strings for easier addition from right to left */
    reverse_string(n1);
    reverse_string(n2);

    for (i = 0; i < max_len; i++) {
        int digit1 = (i < len1) ? (n1[i] - '0') : 0;
        int digit2 = (i < len2) ? (n2[i] - '0') : 0;

        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }

    if (carry > 0) {
        r[i] = carry + '0';
        i++;
    }

    r[i] = '\0'; /* Null-terminate the result string */
    reverse_string(r);

    return (r); /* Parentheses added around the return expression */
}

