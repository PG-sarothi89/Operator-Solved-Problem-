// Q1: What is the output of the following C code? Explain why.

#include <stdio.h>

int main()
{
    int i = 5;
    int var = sizeof(i++);
    printf("%d,%d\n", i, var);
    return 0;
}

// output is 5, var is 4
// Explanation: In C, the sizeof operator is evaluated at compile time and does not evaluate its operand. 
//Therefore, the expression i++ is not evaluated, and the value of var is the size of the integer type, which is 4 bytes on most systems. The value of i remains 5.
// according to c17 standard, sizeof is not an expression and does not evaluate its operand.