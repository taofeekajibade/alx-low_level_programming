#include <stdlib.h>

/**
 * print_name - function name
 * @name: character parameter
 * @f:function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
