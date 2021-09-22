#include <stdio.h>
#include <conio.h>

void lcm(int a, int b)
{
    static int m = 0;
    m = m + b; //we keep increamenting "m" till we get common multiple
    if (m % a == 0 && m % b == 0)
    {
        printf("%d\n", m);
    }
    else
    {
        lcm(a, b);
    }
}

int main()
{
    int a, b;
    printf("Enter first Number : \n");
    scanf("%d", &a);
    printf("Enter Second Number : \n");
    scanf("%d", &b);
    if (a > b) // first  number should be smaller than second
    {
        lcm(b, a);
    }
    else
    {
        lcm(a, b);
    }
    return 0;
}