#include "main.h"

int main(void)
{
	int *s;

	if (*s == '\0')
	{
		putchar('\n');
		
		return;
	}
	
	putchar(*s);
	_puts_recursion(s + 1);
};
