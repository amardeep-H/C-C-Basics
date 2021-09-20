#include <stdio.h>
#include <conio.h>

int calGCD(int n1, int n2)
{
    while (n1 != n2)
    {
        if (n1 > n2)
        {
            return calGCD(n1 - n2, n2);
        }

        else
        {
            return calGCD(n1, n2 - n1);
        }
    }
    return n1;
}

int main()
{
    int num1, num2, gcd;
    printf("Enter number 1 :\n");
    scanf("%d", &num1);

    printf("Enter number 2 :\n");
    scanf("%d", &num2);

    gcd = calGCD(num1, num2);
    printf("GCD : %d\n", gcd);

    return 0;
}