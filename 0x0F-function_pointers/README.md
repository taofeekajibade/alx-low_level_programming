# Project Title: 0x0F.C - Function Pointers

Compiled with: 
``` gcc -Wall -Werror -Wextra -pedantic -std=gnu89 
```
The code follows ``` Betty ``` style and is checked with **betty-style.pl** and **betty-doc.pl** 

0 - Write a function that prints a name.
1 - Write a function that executes a function given as a parameter on each element of an array. 
``` void array_iterator(int *array, size_t size, void (*action)(int)); ```
2 - Write a function that searches for an integer. ``` int int_index(int *array, int size, int (*cmp)(int)); ```
3 - Write a program that performs simple operations. **Usage:** ``` calc num1 operator num2 ```
4 - Write a program that prints the opcodes of its own main function. **Usage:** ``` ./main number_of_bytes ```

