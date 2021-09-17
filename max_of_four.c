/* TASK : You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.

a += b is equivalent to a = a + b */

/*#include <stdio.h>
int max_of_four(int num1, int num2, int num3, int num4)
{
    int max = 0;
    if (num1 > max)
    {
        max = num1;
    }
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }

    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
*/
#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int max;
    max = a > b ? a : b;
    max = c > max ? c : max;
    max = d > max ? d : max;
    return max;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

/*

#include <stdio.h>


int max(int a, int b)
{
    return a > b ? a : b; // i wrote this function to avoid duplication of code.
}

int max_of_four(int a, int b, int c, int d)
{
    return max(a, max(b, max(c, d)));
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;

    */