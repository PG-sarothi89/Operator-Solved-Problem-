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
// output is 0 1 2 1
// Explanation: In C, the logical OR (||) and logical AND (&&) operators use short-circuit evaluation.
// In the expression ++a || b++, since ++a evaluates to 2 (which is true), the right side b++ is not evaluated, so b remains 1. Therefore, c is assigned the value 1 (true).
// In the expression b-- && --a, since b is currently 1 (true), the right side --a is evaluated, which decrements a to 1. However, since b-- evaluates to 1 (true), d is assigned the value 1 (true). After this expression, b is decremented to 0.
// Finally, the values of d, c, b, and a are printed, resulting in "0 1 2 1".   