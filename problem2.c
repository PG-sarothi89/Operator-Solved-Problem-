/*What is the output of the following C code? with explanation */


#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;
    printf("%d %d %d %d", d, c, b, a);
    return 0;
}
// output is 1 1 0 1
// Explanation:
// 1. Initially, a and b are both set to 1.
// 2. In the expression ++a || b++, ++a is evaluated first, incrementing a to 2. Since this is true, b++ is not evaluated, and c is set to 1.
// 3. In the expression b-- && --a, b-- is evaluated first, which is true (1), so --a is evaluated next, decrementing a to 1. Since both sides are true, d is set to 1.
// 4. After these evaluations, b is decremented to 0.
// 5. The final values are d = 1, c = 1, b = 0, a = 1.
// Note: The logical OR (||) and logical AND (&&) operators use short-circuit evaluation, meaning that the second operand is only evaluated if necessary.       
// According to the C17 standard, the logical operators do not guarantee the order of evaluation of their operands, but they do guarantee that the left operand is evaluated first. 
// Therefore, the output is 1 1 0 1.
// The value of d is 1 because both b-- and --a evaluate to true (non-zero).
// The value of c is 1 because ++a evaluates to true (non-zero), so b++ is not evaluated.
// The final values of b and a are 0 and 1, respectively, after the post-decrement and pre-decrement operations.
// The output is "1 1 0 1".