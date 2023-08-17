#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        char *sign;
        char operator;
        int a, b, answer;
        int (*ptr)(int, int);

	 if (argc != 4)
	 {
		 printf("Error\n");
		 return (98);
	 }
	 a = atoi(argv[1]);
	 b = atoi(argv[3]);
	 if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	 {
		 printf("Error\n");
		 return (100);
	 }
	 ptr = get_op_func(argv[2]);
	 if (!ptr)
	 {
		 printf("Error\n");
		 return (99);
	 }
	 answer = ptr(a, b);
	 printf("%d\n", answer);
	 return (0);

}

