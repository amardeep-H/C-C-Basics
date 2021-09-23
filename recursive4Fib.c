#include <stdio.h>
#include <conio.h>

int printFib(int a, int b, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int c = a + b;
    printf("%d\t", c);
    printFib(b, c, n - 1);
}

int main()
{
    int n = 10;
    int a = 0, b = 1;
    printf("%d\t%d\t", a, b);
    printFib(a, b, n - 2);

    return 0;
}