#include <conio.h>
#include <stdio.h>

int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * fact(num - 1));
    }
}

int main()
{

    int n = 6;
    int na = fact(n);
    printf("Factorial of %d is %d\n", n, na);
    return 0;
}